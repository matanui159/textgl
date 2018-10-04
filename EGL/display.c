#include "util.h"
#include "error.h"

static int g_display = 0;
static bool g_init = false;

TGL_API EGLDisplay TGL_ENTRY eglGetDisplay(EGLNativeDisplayType display) {
	return &g_display;
}

TGL_API EGLBoolean TGL_ENTRY eglInitialize(EGLDisplay display, EGLint* major, EGLint* minor) {
	TGL_UNUSED(display);
	
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

TGL_API EGLBoolean TGL_ENTRY eglTerminate(EGLDisplay display) {
	TGL_UNUSED(display);
	
	if (g_init) {
		// TODO: exit everything
		g_init = false;
	}
	return true;
}