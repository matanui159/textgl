#ifndef TGLC_ATTRIB_H_
#define TGLC_ATTRIB_H_
#include "util.h"
#include <limits.h>

#define TGLC_CONFIG_ID 418

#define TGLC_ATTRIB_LIST(callback) \
	callback(EGL_CONFIG_ID, exact, EGL_DONT_CARE, TGLC_CONFIG_ID) \
	callback(EGL_CONFIG_CAVEAT, exact, EGL_DONT_CARE, \
		EGL_NON_CONFORMANT_CONFIG) \
	callback(EGL_BUFFER_SIZE, min, 0, 32) \
	callback(EGL_RED_SIZE, min, 0, 8) \
	callback(EGL_GREEN_SIZE, min, 0, 8) \
	callback(EGL_BLUE_SIZE, min, 0, 8) \
	callback(EGL_ALPHA_SIZE, min, 0, 8) \
	callback(EGL_DEPTH_SIZE, min, 0, 16) \
	callback(EGL_STENCIL_SIZE, min, 0, 8) \
	callback(EGL_SAMPLE_BUFFERS, min, 0, 0) \
	callback(EGL_SAMPLES, min, 0, 0) \
	callback(EGL_SURFACE_TYPE, mask, EGL_WINDOW_BIT, \
		EGL_WINDOW_BIT | EGL_PBUFFER_BIT) \
	callback(EGL_LEVEL, exact, 0, 0) \
	callback(EGL_MAX_PBUFFER_WIDTH, ignore, 0, INT_MAX) \
	callback(EGL_MAX_PBUFFER_HEIGHT, ignore, 0, INT_MAX) \
	callback(EGL_MAX_PBUFFER_PIXELS, ignore, 0, INT_MAX) \
	callback(EGL_TRANSPARENT_TYPE, exact, EGL_NONE, EGL_NONE) \
	callback(EGL_TRANSPARENT_RED_VALUE, ignore, EGL_DONT_CARE, 0) \
	callback(EGL_TRANSPARENT_GREEN_VALUE, ignore, EGL_DONT_CARE, 0) \
	callback(EGL_TRANSPARENT_BLUE_VALUE, ignore, EGL_DONT_CARE, 0) \
	callback(EGL_NATIVE_RENDERABLE, exact, EGL_DONT_CARE, false) \
	callback(EGL_NATIVE_VISUAL_TYPE, ignore, EGL_DONT_CARE, EGL_NONE) \
	callback(EGL_NATIVE_VISUAL_ID, ignore, 0, 0)

#endif