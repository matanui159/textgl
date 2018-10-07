#include "surface.h"
#include "error.h"
#include "display.h"
#include "config.h"
#include "attrib.h"
#include "native/native.h"

static tgl_heap_t g_surfaces;

static void surface_create(void* obj) {
	tglc_surface_t* surface = obj;
	surface->color = NULL;
	surface->depth = NULL;
	surface->stencil = NULL;
}

static void surface_resize(tglc_surface_t* surface, int width, int height) {
	surface->width = width;
	surface->height = height;
	surface->color = tgl_mem_resize(surface->color, width * height * 4);
	surface->depth = tgl_mem_resize(surface->depth, width * height * 2);
	surface->stencil = tgl_mem_resize(surface->stencil, width * height);
}

void tglc_surface_init() {
	tgl_heap_create(&g_surfaces, sizeof(tglc_surface_t), surface_create, NULL);
}

void tglc_surface_exit() {
	tgl_heap_destroy(&g_surfaces);
}

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay display, EGLConfig config, EGLNativeWindowType window, const EGLint* attrib) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	if (window != NULL) {
		tglc_error_set(EGL_BAD_NATIVE_WINDOW);
		return NULL;
	}
	if (attrib != NULL && attrib[0] != EGL_NONE) {
		tglc_error_set(EGL_BAD_ATTRIBUTE);
		return NULL;
	}

	tglc_surface_t* surface = tgl_heap_add(&g_surfaces);
	surface->window = true;

	return surface;
}

TGL_API EGLSurface TGL_ENTRY eglCreatePbufferSurface(EGLDisplay display, EGLConfig config, const EGLint* attrib) {
	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return NULL;
	}
	
	int width = 0;
	int height = 0;
	bool largest = false;
	if (attrib != NULL) {
		while (attrib[0] != EGL_NONE) {
			switch (attrib[0]) {
				case EGL_WIDTH:
					width = attrib[1];
					break;
				case EGL_HEIGHT:
					height = attrib[1];
					break;
				case EGL_LARGEST_PBUFFER:
					largest = attrib[1];
					break;
				default:
					tglc_error_set(EGL_BAD_ATTRIBUTE);
					return NULL;
			}
			attrib += 2;
		}
	}

	tglc_surface_t* surface = tgl_heap_add(&g_surfaces);
	surface->window = false;
	surface->largest = largest;
	surface_resize(surface, width, height);
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
	tgl_mem_destroy(surface->color);
	tgl_mem_destroy(surface->depth);
	tgl_mem_destroy(surface->stencil);
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