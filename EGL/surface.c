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

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay display, EGLConfig config, EGLNativeWindowType window, const EGLint* attr) {
	TGL_UNUSED(window);
	TGL_UNUSED(attr);

	if (!tglc_display_check(display) || !tglc_config_check(config)) {
		return EGL_NO_SURFACE;
	}

	unsigned name;
	tgl_heap_gen(&g_surfaces, 1, &name);
	tglc_surface_t* surface = tgl_heap_get(&g_surfaces, name);
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

	unsigned name = tgl_heap_name(&g_surfaces, egl_surface);
	tgl_heap_delete(&g_surfaces, 1, &name);
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglQuerySurface(EGLDisplay display, EGLSurface egl_surface, EGLint attr, EGLint* value) {
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

	// TODO: figure out and implement ALL of these -_-
	// tglc_surface_t* surface = egl_surface;
	// switch (attr) {
	// 	case EGL_WIDTH:
	// 		*value = surface->width;
	// 	case EGL_HEIGHT:
	// 		*value = surface->height;
	// 	case EGL_CONFIG_ID:
	// 		*value = TGLC_CONFIG_ID;
	// 		break;
	// 	case EGL_HORIZONTAL_RESOLUTION:
	// 	case EGL_LARGEST_PBUFFER:
	// 	case EGL_MIPMAP_LEVEL:
	// 	case EGL_MIPMAP_TEXTURE:
	// 	case EGL_MULTISAMPLE_RESOLVE:
	// 	case EGL_PIXEL_ASPECT_RATIO:
	// 	case EGL_RENDER_BUFFER:
	// 	case EGL_SWAP_BEHAVIOR:
	// 	case EGL_TEXTURE_FORMAT:
	// 	case EGL_TEXTURE_TARGET:
	// 	case EGL_VERTICAL_RESOLUTION:
	// }
	*value = 0;
	return true;
}