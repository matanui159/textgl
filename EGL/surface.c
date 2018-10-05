#include "surface.h"
#include "error.h"
#include "display.h"
#include "config.h"
#include "native/native.h"

static tgl_heap_t g_surfaces;

void tglc_surface_init() {
	tgl_heap_create(&g_surfaces, sizeof(tglc_surface_t), NULL, NULL);
}

void tglc_surface_exit() {
	tgl_heap_destroy(&g_surfaces);
}

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay display, EGLConfig config, EGLNativeWindowType window, const EGLint* attrib) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	if (attrib != NULL && attrib[0] != EGL_NONE) {
		tglc_error_set(EGL_BAD_ATTRIBUTE);
		return NULL;
	}

	tglc_surface_t* surface = tgl_heap_add(&g_surfaces);
	surface->window = true;

	tglc_native_surface(window);
	return surface;
}

TGL_API EGLBoolean TGL_ENTRY eglDestroySurface(EGLDisplay display, EGLSurface egl_surface) {
	if (!tglc_display_check(display)) {
		return false;
	}
	if (egl_surface == NULL) {
		tglc_error_set(EGL_BAD_SURFACE);
		return false;
	}

	tglc_surface_t* surface = egl_surface;
	tgl_heap_remove(&g_surfaces, surface);
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglQuerySurface(EGLDisplay display, EGLSurface egl_surface, EGLint attrib, EGLint* value) {
	if (!tglc_display_check(display)) {
		return false;
	}
	if (egl_surface == NULL) {
		tglc_error_set(EGL_BAD_SURFACE);
		return false;
	}
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	// tglc_surface_t* surface = egl_surface;
	TGL_UNUSED(attrib);
	return true;
}