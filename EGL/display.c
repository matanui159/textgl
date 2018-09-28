#include "util.h"

TGL_API EGLDisplay TGL_ENTRY eglGetDisplay(EGLNativeDisplayType display) {
	if (display == EGL_DEFAULT_DISPLAY) {
		return EGL_NO_DISPLAY;
	} else {
		return EGL_NO_DISPLAY;
	}
}