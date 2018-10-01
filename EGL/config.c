#include "config.h"
#include "error.h"
#include "display.h"

static int g_config = 418; // I'm a teapot

static bool config_match_exact(int attr, int config, int value) {
	if (config == value) {
		return true;
	}
	if (attr != EGL_LEVEL && attr != EGL_MATCH_NATIVE_PIXMAP) {
		if (value == EGL_DONT_CARE) {
			return true;
		}
	}
	return false;
}

static bool config_match_min(int attr, int config, int value) {
	TGL_UNUSED(attr);
	if (value == EGL_DONT_CARE || config >= value) {
		return true;
	}
	return false;
}

static bool config_match_mask(int attr, int config, int value) {
	TGL_UNUSED(attr);
	if ((config & value) == value) {
		return true;
	}
	return false;
}

static bool config_match_ignore(int attr, int config, int value) {
	TGL_UNUSED(attr);
	TGL_UNUSED(config);
	TGL_UNUSED(value);
	return true;
}

bool tglc_config_check(EGLConfig config) {
	if (config != &g_config) {
		tglc_error_set(EGL_BAD_CONFIG);
		return false;
	}
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigs(EGLDisplay edisplay, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	if (tglc_display_get(edisplay) == NULL) {
		return false;
	}
	if (size < 0 || ret_size == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}
	if (size > 0 && configs == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	if (size > 0) {
		*configs = &g_config;
	}
	*ret_size = 1;
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglChooseConfig(EGLDisplay edisplay, const EGLint* attr, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	if (tglc_display_get(edisplay) == NULL) {
		return false;
	}
	if (size < 0 || ret_size == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}
	if (size > 0 && configs == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	#define ATTR(name, match, def, config) \
		int config_##name = def;
	#include "attr.h"
	#undef ATTR

	if (attr != NULL) {
		for (; attr[0] != EGL_NONE; attr += 2) {
			switch (attr[0]) {
				#define ATTR(name, match, def, config) \
					case name: \
						config_##name = attr[1]; \
						break;
				#include "attr.h"
				#undef ATTR

				default:
					tglc_error_set(EGL_BAD_ATTRIBUTE);
					break;
			}
		}
	}

	bool all_match = true;
	#define ATTR(name, match, def, config) \
		if (!config_match_##match(name, config, config_##name)) { \
			all_match = false; \
		}
	#include "attr.h"
	#undef ATTR

	if (all_match) {
		if (size > 0) {
			*configs = &g_config;
		}
		*ret_size = 1;
	} else {
		*ret_size = 0;
	}
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigAttrib(EGLDisplay edisplay, EGLConfig config, EGLint attr, EGLint* value) {
	if (tglc_display_get(edisplay) == NULL || !tglc_config_check(config)) {
		return false;
	}
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}
	if (attr == EGL_MATCH_NATIVE_PIXMAP) {
		tglc_error_set(EGL_BAD_ATTRIBUTE);
		return false;
	}

	switch (attr) {
		#define ATTR(name, match, def, config) \
			case name: \
				*value = config; \
				break;
		#include "attr.h"
		#undef ATTR

		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}