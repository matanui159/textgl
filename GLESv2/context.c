#include "util.h"

static tgl_context_t* g_context = NULL;

TGL_API void TGL_ENTRY tgl_context_set(tgl_context_t* context) {
	g_context = context;
}

TGL_API tgl_context_t* TGL_ENTRY tgl_context_get() {
	return g_context;
}