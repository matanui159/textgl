#include "test.h"
#include <EGL/egl.h>

void test_begin() {
	eglGetError();
	EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	eglInitialize(display, NULL, NULL);
}

void test_end() {
	EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	eglTerminate(display);
}