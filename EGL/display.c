#include "display.h"
#include "error.h"

static tglc_display_t g_display;

tglc_display_t* tglc_display_get(EGLDisplay edisplay) {
	if (edisplay != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return NULL;
	}
	if (!g_display.init) {
		tglc_error_set(EGL_NOT_INITIALIZED);
		return NULL;
	}
	return &g_display;
}

TGL_API EGLDisplay TGL_ENTRY eglGetDisplay(EGLNativeDisplayType display) {
	if (display == EGL_DEFAULT_DISPLAY) {
		return &g_display;
	} else {
		return EGL_NO_DISPLAY;
	}
}

TGL_API EGLBoolean TGL_ENTRY eglInitialize(EGLDisplay edisplay, EGLint* major, EGLint* minor) {
	if (edisplay != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}

	if (!g_display.init) {
		// TODO: init everything
		g_display.init = true;
	}

	if (major != NULL) {
		*major = 1;
	}
	if (minor != NULL) {
		*minor = 4;
	}
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglTerminate(EGLDisplay edisplay) {
	if (edisplay != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}

	if (g_display.init) {
		// TODO: exit everything
		g_display.init = false;
	}
	return true;
}