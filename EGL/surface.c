#include "surface.h"
#include "error.h"
#include "native/native.h"

static tgl_heap_t g_surfaces;

void tglc_surface_init() {
	tgl_heap_create(&g_surfaces, sizeof(tglc_surface_t), NULL, NULL);
}

void tglc_surface_exit() {
	tgl_heap_destroy(&g_surfaces);
}

TGL_API EGLSurface TGL_ENTRY eglCreateWindowSurface(EGLDisplay display, EGLConfig config, EGLNativeWindowType window, const EGLint* attr) {
	TGL_UNUSED(display);
	TGL_UNUSED(config);
	TGL_UNUSED(attr);

	unsigned name;
	tgl_heap_gen(&g_surfaces, 1, &name);
	tglc_surface_t* surface = tgl_heap_get(&g_surfaces, name);
	surface->window = true;

	tglc_native_surface(window);
	return surface;
}

TGL_API EGLBoolean TGL_ENTRY eglDestroySurface(EGLDisplay display, EGLSurface egl_surface) {
	TGL_UNUSED(display);
	if (egl_surface == NULL) {
		tglc_error_set(EGL_BAD_SURFACE);
		return false;
	}

	unsigned name = tgl_heap_name(&g_surfaces, egl_surface);
	tgl_heap_delete(&g_surfaces, 1, &name);
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglQuerySurface(EGLDisplay display, EGLSurface egl_surface, EGLint attr, EGLint* value) {
	if (egl_surface == NULL) {
		tglc_error_set(EGL_BAD_SURFACE);
		return false;
	}
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	tglc_surface_t* surface = egl_surface;
	switch (attr) {
		case EGL_WIDTH:
			*value = surface->width;
			break;
		case EGL_HEIGHT:
			*value = surface->height;
			break;
		case EGL_CONFIG_ID:
			eglGetConfigAttrib(display, NULL, EGL_CONFIG_ID, value);
			break;
		case EGL_HORIZONTAL_RESOLUTION:
		case EGL_VERTICAL_RESOLUTION:
		case EGL_PIXEL_ASPECT_RATIO:
			*value = EGL_UNKNOWN;
			break;
		case EGL_RENDER_BUFFER:
			*value = EGL_BACK_BUFFER;
			break;
		case EGL_SWAP_BEHAVIOR:
			*value = EGL_BUFFER_PRESERVED;
			break;
		case EGL_MULTISAMPLE_RESOLVE:
			*value = EGL_MULTISAMPLE_RESOLVE_DEFAULT;
			break;
		case EGL_LARGEST_PBUFFER:
			*value = false;
			break;
		case EGL_TEXTURE_TARGET:
			*value = EGL_NO_TEXTURE;
			break;
		case EGL_TEXTURE_FORMAT:
			*value = EGL_NO_TEXTURE;
			break;
		case EGL_MIPMAP_TEXTURE:
			*value = false;
			break;
		case EGL_MIPMAP_LEVEL:
			*value = 0;
			break;
		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}