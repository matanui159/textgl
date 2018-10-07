#ifndef TGL_CONTEXT_H_
#define TGL_CONTEXT_H_
#include "util.h"

typedef struct tglc_surface_t {
	int width;
	int height;
	uint8_t* color;
	uint16_t* depth;
	uint8_t* stencil;

	bool window;
	bool largest;
} tglc_surface_t;

typedef struct tgl_context_t {
	unsigned error;
	tglc_surface_t* read;
	tglc_surface_t* write;
} tgl_context_t;

GL_API void TGL_ENTRY tgl_context_create(tgl_context_t* context);
GL_API void TGL_ENTRY tgl_context_destroy(tgl_context_t* context);
GL_API void TGL_ENTRY tgl_context_set(tgl_context_t* context);
GL_API tgl_context_t* TGL_ENTRY tgl_context_get();

#endif