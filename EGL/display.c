#include "display.h"
#include "error.h"

static int g_display = 0;
static bool g_init = false;

bool tglc_display_check(EGLDisplay display) {
	if (display != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}
	if (!g_init) {
		tglc_error_set(EGL_NOT_INITIALIZED);
		return false;
	}
	return true;
}

TGL_API EGLDisplay TGL_ENTRY eglGetDisplay(EGLNativeDisplayType display) {
	if (display == EGL_DEFAULT_DISPLAY) {
		return &g_display;
	} else {
		return EGL_NO_DISPLAY;
	}
}

TGL_API EGLBoolean TGL_ENTRY eglInitialize(EGLDisplay display, EGLint* major, EGLint* minor) {
	if (display != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}

	if (!g_init) {
		// TODO: init everything
		g_init = true;
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

	if (g_init) {
		// TODO: exit everything
		g_init = false;
	}
	return true;
}