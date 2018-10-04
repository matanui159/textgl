#include "error.h"

static int g_error = EGL_SUCCESS;

void tglc_error_set(int error) {
	g_error = error;
}

TGL_API EGLint TGL_ENTRY eglGetError() {
	int error = g_error;
	g_error = EGL_SUCCESS;
	return error;
}