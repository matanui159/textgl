#ifndef TGL_CONTEXT_H_
#define TGL_CONTEXT_H_
#include "util.h"

typedef struct tgl_context_t {
	int x;
} tgl_context_t;

GL_APICALL void TGL_ENTRY tgl_context_create(tgl_context_t* context);
GL_APICALL void TGL_ENTRY tgl_context_destroy(tgl_context_t* context);
GL_APICALL void TGL_ENTRY tgl_context_set(tgl_context_t* context, int width, int height);
GL_APICALL const uint8_t* TGL_ENTRY tgl_context_frame();

#endif