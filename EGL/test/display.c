#include "test.h"

void tglc_display_test() {
	TGL_CHECK(eglGetDisplay((EGLNativeDisplayType)8) == EGL_NO_DISPLAY);
	TGL_CHECK(eglGetError() == EGL_SUCCESS);

	TGL_CHECK(eglGetDisplay(EGL_DEFAULT_DISPLAY) != EGL_NO_DISPLAY);
	TGL_CHECK(eglGetError() == EGL_SUCCESS);
}