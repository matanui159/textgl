#ifndef TGL_CONTEXT_H_
#define TGL_CONTEXT_H_
#include "util.h"

typedef struct tgl_context_t {
	int x;
} tgl_context_t;

GL_APICALL void TGL_ENTRY tgl_context_set(tgl_context_t* context);
GL_APICALL tgl_context_t* TGL_ENTRY tgl_context_get();

#define TGLC tgl_context_get()

#endif