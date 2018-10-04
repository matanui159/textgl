#include "util.h"

static tgl_context_t* g_context = NULL;

TGL_API void TGL_ENTRY tgl_context_create(tgl_context_t* context) {
	// TODO: create context
	context->x = 1;
}

TGL_API void TGL_ENTRY tgl_context_destroy(tgl_context_t* context) {
	// TODO: destroy context
	context->x = 0;
}

TGL_API void TGL_ENTRY tgl_context_set(tgl_context_t* context, int width, int height) {
	// TODO: check size of default framebuffer
	TGL_UNUSED(width);
	TGL_UNUSED(height);

	g_context = context;
}

TGL_API const uint8_t* TGL_ENTRY tgl_context_frame() {
	// TODO: return current frame
	return NULL;
}