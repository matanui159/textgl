#ifndef TGL_UCONTEXT_H_
#define TGL_UCONTEXT_H_
#include "util.h"

typedef struct tgl_context_t {
	unsigned error;
} tgl_context_t;

GL_API void TGL_ENTRY tgl_context_create(tgl_context_t* context);
GL_API void TGL_ENTRY tgl_context_destroy(tgl_context_t* context);
GL_API void TGL_ENTRY tgl_context_set(tgl_context_t* context, int width, int height);
GL_API const uint8_t* TGL_ENTRY tgl_context_frame();

#endif