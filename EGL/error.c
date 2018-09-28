#include "error.h"

static __thread int g_error = EGL_SUCCESS;

void tglc_error_set(int error) {
	g_error = error;
}

TGL_API int TGL_ENTRY eglGetError() {
	return g_error;
}