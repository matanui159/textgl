#ifndef TGL_CONTEXT_H_
#define TGL_CONTEXT_H_
#include "util.h"

#ifdef TGL_EGL
#	define TGLC_API TGL_API
#else
#	define TGLC_API KHRONOS_APICALL
#endif

typedef struct tgl_context_t {
	int x;
} tgl_context_t;

TGLC_API extern tgl_context_t* g_tgl_context;

#define tglc g_tgl_context

#endif