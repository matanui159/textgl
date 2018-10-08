#include "surface.h"
#include "error.h"
#include "display.h"
#include "config.h"
#include "attrib.h"
#include "native/native.h"

static tgl_heap_t g_surfaces;

static void surface_create(tglc_surface_t* surface) {
	surface->color = NULL;
	surface->depth = NULL;
	surface->stencil = NULL;
}

static void surface_destroy(tglc_surface_t* surface) {
	tgl_mem_destroy(surface->color);
	tgl_mem_destroy(surface->depth);
	tgl_mem_destroy(surface->stencil);
}

static void surface_resize(tglc_surface_t* surface, int width, int height) {
	surface->width = width;
	surface->height = height;
	surface->color = tgl_mem_resize(surface->color, width * height * 4);
	surface->depth = tgl_mem_resize(surface->depth, width * height * 2);
	surface->stencil = tgl_mem_resize(surface->stencil, width * height);
}

void tglc_surface_init() {
	tgl_heap_create(&g_surfaces,
		sizeof(tglc_surface_t),
		(tgl_heap_callback_t)surface_create, 
		(tgl_heap_callback_t)surface_destroy
	);
}

void tglc_surface_exit() {
	tgl_heap_destroy(&g_surfaces);
}

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay display, EGLConfig config, EGLNativeWindowType window, const EGLint* attribs) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	if (window != NULL) {
		tglc_error_set(EGL_BAD_NATIVE_WINDOW);
		return NULL;
	}
	if (attribs != NULL && attribs[0] != EGL_NONE) {
		tglc_error_set(EGL_BAD_ATTRIBUTE);
		return NULL;
	}

	tglc_surface_t* surface = tgl_heap_add(&g_surfaces);
	surface->window = true;

	return surface;
}

TGL_API EGLSurface TGL_ENTRY eglCreatePbufferSurface(EGLDisplay display, EGLConfig config, const EGLint* attribs) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	
	int width = 0;
	int height = 0;
	bool largest = false;
	if (attribs != NULL) {
		while (attribs[0] != EGL_NONE) {
			switch (attribs[0]) {
				case EGL_WIDTH:
					width = attribs[1];
					break;
				case EGL_HEIGHT:
					height = attribs[1];
					break;
				case EGL_LARGEST_PBUFFER:
					largest = attribs[1];
					break;
				default:
					tglc_error_set(EGL_BAD_ATTRIBUTE);
					return NULL;
			}
			attribs += 2;
		}
	}

	tglc_surface_t* surface = tgl_heap_add(&g_surfaces);
	surface->window = false;
	surface->largest = largest;
	surface_resize(surface, width, height);
	return surface;
}

TGL_API EGLSurface TGL_ENTRY eglCreatePixmapSurface(EGLDisplay display, EGLConfig config, NativePixmapType pixmap, const EGLint* attribs) {
	TGL_UNUSED(pixmap);
	TGL_UNUSED(attribs);
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	
	tglc_error_set(EGL_BAD_MATCH);
	return NULL;
}

TGL_API EGLBoolean TGL_ENTRY eglDestroySurface(EGLDisplay display, EGLSurface egl_surface) {
	if (!tglc_display_check(display)) {
		return false;
	}
	if (egl_surface == NULL) {
		tglc_error_set(EGL_BAD_SURFACE);
		return false;
	}

	tgl_heap_remove(&g_surfaces, egl_surface);
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

	tglc_surface_t* surface = egl_surface;
	switch (attrib) {
		case EGL_CONFIG_ID:
			*value = TGLC_CONFIG_ID;
			break;
		case EGL_WIDTH:
			*value = surface->width;
			break;
		case EGL_HEIGHT:
			*value = surface->height;
			break;
		case EGL_LARGEST_PBUFFER:
			if (!surface->window) {
				*value = surface->largest;
			}
			break;
		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}