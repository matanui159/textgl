#include "util.h"
#include "error.h"
#include "surface.h"

static int g_display = 0;
static bool g_init = false;

TGL_API EGLDisplay TGL_ENTRY eglGetDisplay(EGLNativeDisplayType display) {
	TGL_UNUSED(display);
	return &g_display;
}

TGL_API EGLBoolean TGL_ENTRY eglInitialize(EGLDisplay display, EGLint* major, EGLint* minor) {
	TGL_UNUSED(display);
	
	if (!g_init) {
		tglc_surface_init();
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

TGL_API EGLBoolean TGL_ENTRY eglTerminate(EGLDisplay display) {
	TGL_UNUSED(display);
	
	if (g_init) {
		tglc_surface_exit();
		g_init = false;
	}
	return true;
}