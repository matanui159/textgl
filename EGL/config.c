#include "config.h"
#include "attrib.h"
#include "error.h"
#include "display.h"

static int g_config = 0;

static bool match_ignore(int value, int config) {
	TGL_UNUSED(value);
	TGL_UNUSED(config);
	return true;
}

static bool match_min(int value, int config) {
	if (value == EGL_DONT_CARE) {
		return true;
	} else {
		return value <= config;
	}
}

static bool match_mask(int value, int config) {
	if (value == EGL_DONT_CARE) {
		return true;
	} else {
		return (value & config) == value;
	}
}

static bool match_exact(int value, int config) {
	if (value == EGL_DONT_CARE && config != EGL_LEVEL) {
		return true;
	} else {
		return value == config;
	}
}

bool tglc_config_check(EGLConfig config) {
	if (config != &g_config) {
		tglc_error_set(EGL_BAD_CONFIG);
		return false;
	}
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigs(EGLDisplay display, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	if (!tglc_display_check(display)) {
		return false;
	}
	if (size < 0 || ret_size == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}
	if (size > 0 && configs != NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	if (size > 0) {
		*configs = &g_config;
	}
	*ret_size = 1;
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglChooseConfig(EGLDisplay display, const int* attrib, EGLConfig* configs, int size, int* ret_size) {
	if (!tglc_display_check(display)) {
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

	#define ATTRIB_VAR(name, match, def, config) \
		int config_##name = def;
	TGLC_ATTRIB_LIST(ATTRIB_VAR)

	if (attrib != NULL) {
		while (attrib[0] != EGL_NONE) {
			switch (attrib[0]) {
				#define ATTRIB_SET(name, match, def, config) \
					case name: \
						config_##name = attrib[1]; \
						break;
				TGLC_ATTRIB_LIST(ATTRIB_SET)
				default:
					tglc_error_set(EGL_BAD_ATTRIBUTE);
					break;
			}
			attrib += 2;
		}
	}

	bool all_match = true;
	if (config_EGL_CONFIG_ID != EGL_DONT_CARE) {
		if (config_EGL_CONFIG_ID != TGLC_CONFIG_ID) {
			all_match = false;
		}
	} else {
		#define MATCH_IGNORE(value, config) true
		#define MATCH_MIN(value, config) (value <= config)
		#define MATCH_MASK(value, config) ((value & config) == value)
		#define MATCH_EXACT(value, config) \
			(value == EGL_DONT_CARE || value == config)
		#define MATCH_LEVEL(value, config) (value == config)

		#define ATTRIB_MATCH(name, match, def, config) \
			if (!match_##match(config_##name, config)) { \
				all_match = false; \
			}
		TGLC_ATTRIB_LIST(ATTRIB_MATCH)
	}

	if (all_match) {
		return eglGetConfigs(display, configs, size, ret_size);
	} else {
		*ret_size = 0;
		return true;
	}
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigAttrib(EGLDisplay display, EGLConfig config, EGLint attrib, EGLint* value) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return false;
	}
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	switch (attrib) {
		#define ATTRIB_GET(name, match, def, config) \
			case name: \
				*value = config; \
				break;
		TGLC_ATTRIB_LIST(ATTRIB_GET)
		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}