#include "test.h"
#include <EGL/egl.h>

TEST_BEGIN(eglGetDisplay) {
	TEST_CHECK(eglGetDisplay(EGL_DEFAULT_DISPLAY) != EGL_NO_DISPLAY);
	TEST_CHECK(eglGetError() == EGL_SUCCESS);

	TEST_CHECK(eglGetDisplay((EGLNativeDisplayType)8) == EGL_NO_DISPLAY);
	TEST_CHECK(eglGetError() == EGL_SUCCESS);
} TEST_END

TEST_BEGIN(eglInitialize) {
	TEST_CHECK(!eglInitialize(NULL, NULL, NULL));
	TEST_CHECK(eglGetError() == EGL_BAD_DISPLAY);

	EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	eglTerminate(display);
	EGLint major, minor;
	TEST_CHECK(eglInitialize(display, &major, &minor));
	TEST_CHECK(major == 1);
	TEST_CHECK(minor == 4);
	TEST_CHECK(eglGetError() == EGL_SUCCESS);

	major = 0;
	minor = 0;
	TEST_CHECK(eglInitialize(display, &major, &minor));
	TEST_CHECK(major == 1);
	TEST_CHECK(minor == 4);
	TEST_CHECK(eglGetError() == EGL_SUCCESS);

	TEST_CHECK(eglInitialize(display, NULL, NULL));
	TEST_CHECK(eglGetError() == EGL_SUCCESS);
} TEST_END

TEST_BEGIN(eglTerminate) {
	TEST_CHECK(!eglTerminate(NULL));
	TEST_CHECK(eglGetError() == EGL_BAD_DISPLAY);

	EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	TEST_CHECK(eglTerminate(display));
	TEST_CHECK(eglGetError() == EGL_SUCCESS);

	TEST_CHECK(eglTerminate(display));
	TEST_CHECK(eglGetError() == EGL_SUCCESS);
} TEST_END