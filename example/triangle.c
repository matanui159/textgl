#include <EGL/egl.h>
#include <stdio.h>

int main() {
	EGLDisplay display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
	eglInitialize(display, NULL, NULL);
	EGLConfig config;
	int count;
	eglChooseConfig(display, NULL, &config, 1, &count);
	EGLSurface surface = eglCreateWindowSurface(display, config, NULL, NULL);

	eglDestroySurface(display, surface);
	eglTerminate(display);
	puts("TADA");
	return 0;
}