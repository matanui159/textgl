#include "util.h"
#include "error.h"
#include <limits.h>

static int g_config = 0;

TGL_API EGLBoolean TGL_ENTRY eglGetConfigs(EGLDisplay display, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	TGL_UNUSED(display);

	if (size < 0 || ret_size == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}
	if (size > 0 && configs == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	if (size > 0) {
		*configs = &g_config;
	}
	*ret_size = 1;
	return true;
}

TGL_API EGLBoolean TGL_ENTRY eglChooseConfig(EGLDisplay display, const EGLint* attr, EGLConfig* configs, EGLint size, EGLint* ret_size) {
	TGL_UNUSED(attr);
	return eglGetConfigs(display, configs, size, ret_size);
}

TGL_API EGLBoolean TGL_ENTRY eglGetConfigAttrib(EGLDisplay display, EGLConfig config, EGLint attr, EGLint* value) {
	TGL_UNUSED(display);
	TGL_UNUSED(config);
	
	if (value == NULL) {
		tglc_error_set(EGL_BAD_PARAMETER);
		return false;
	}

	switch (attr) {
		case EGL_CONFIG_ID:
			*value = 418; // I'm a teapot
			break;
		case EGL_COLOR_BUFFER_TYPE:
			*value = EGL_COLOR_BUFFER_TYPE;
			break;
		case EGL_BUFFER_SIZE:
			*value = 32;
			break;
		case EGL_RED_SIZE:
		case EGL_GREEN_SIZE:
		case EGL_BLUE_SIZE:
		case EGL_ALPHA_SIZE:
			*value = 8;
			break;
		case EGL_ALPHA_MASK_SIZE:
		case EGL_LUMINANCE_SIZE:
		case EGL_DEPTH_SIZE:
		case EGL_STENCIL_SIZE:
		case EGL_SAMPLE_BUFFERS:
		case EGL_SAMPLES:
		case EGL_MIN_SWAP_INTERVAL:
			*value = 0;
			break;
		case EGL_MAX_SWAP_INTERVAL:
			*value = 1;
			break;
		case EGL_RENDERABLE_TYPE:
			*value = EGL_OPENGL_ES2_BIT;
			break;
		case EGL_CONFORMANT:
			*value = 0;
			break;
		case EGL_CONFIG_CAVEAT:
			*value = EGL_NON_CONFORMANT_CONFIG;
			break;
		case EGL_SURFACE_TYPE:
			*value = EGL_WINDOW_BIT | EGL_PBUFFER_BIT;
			break;
		case EGL_TRANSPARENT_TYPE:
			*value = EGL_NONE;
			break;
		case EGL_TRANSPARENT_RED_VALUE:
		case EGL_TRANSPARENT_GREEN_VALUE:
		case EGL_TRANSPARENT_BLUE_VALUE:
			*value = 0;
			break;
		case EGL_LEVEL:
			*value = 0;
			break;
		case EGL_MAX_PBUFFER_WIDTH:
		case EGL_MAX_PBUFFER_HEIGHT:
		case EGL_MAX_PBUFFER_PIXELS:
			*value = INT_MAX;
			break;
		case EGL_BIND_TO_TEXTURE_RGB:
		case EGL_BIND_TO_TEXTURE_RGBA:
		case EGL_NATIVE_RENDERABLE:
			*value = false;
			break;
		case EGL_NATIVE_VISUAL_TYPE:
			*value = EGL_NONE;
			break;
		case EGL_NATIVE_VISUAL_ID:
			*value = 0;
			break;
		default:
			tglc_error_set(EGL_BAD_ATTRIBUTE);
			return false;
	}
	return true;
}