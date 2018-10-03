#include "surface.h"

static void surface_create(void* obj) {
	TGL_UNUSED(obj);
}

static void surface_destroy(void* obj) {
	TGL_UNUSED(obj);
}

void tglc_surface_init(tglc_display_t* display) {
	// TODO: allow null callbacks
	tgl_heap_create(&display->surface.heap,
		sizeof(tglc_surface_init),
		surface_create,
		surface_destroy
	);
}

void tglc_surface_exit(tglc_display_t* display) {
	tgl_heap_destroy(&display->surface.heap);
}

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay edisplay, EGLConfig config, EGLNativeWindowType window, EGLint* attr) {
	// TODO: create window surface
}