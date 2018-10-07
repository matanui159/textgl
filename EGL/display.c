#include "util.h"
#include "error.h"
#include "surface.h"

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
	if (display != NULL) {
		return NULL;
	}
	return &g_display;
}

TGL_API EGLBoolean TGL_ENTRY eglInitialize(EGLDisplay display, EGLint* major, EGLint* minor) {
	if (display != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}

	if (!g_init) {
		tglc_surface_init();
		g_init = true;
	}
	if (major != NULL) {
		*major = 1;
	}
	if (minor != NULL) {
		*minor = 0;
	}
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglTerminate(EGLDisplay display) {
	if (display != &g_display) {
		tglc_error_set(EGL_BAD_DISPLAY);
		return false;
	}
	
	if (g_init) {
		tglc_surface_exit();
		g_init = false;
	}
	return true;
}