#include "util.h"
#include "error.h"

static int g_config = 0;

TGL_API EGLBoolean TGL_ENTRY eglGetConfigs(EGLDisplay display, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	TGL_UNUSED(display);

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

TGL_API EGLBoolean TGL_ENTRY eglChooseConfig(EGLDisplay display, const EGLint* attr, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	TGL_UNUSED(attr);
	return eglGetConfigs(display, configs, size, ret_size);
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigAttrib(EGLDisplay display, EGLConfig config, EGLint attr, EGLint* value) {
	TGL_UNUSED(display);
	TGL_UNUSED(config);
	
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	switch (attr) {
		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}