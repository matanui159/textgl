#include "context.h"
#include "error.h"

static tgl_context_t* g_context = NULL;

tgl_context_t* tgl_context_get() {
	return g_context;
}

TGL_API void TGL_ENTRY tgl_context_create(tgl_context_t* context) {
	context->error = GL_NO_ERROR;
}

TGL_API void TGL_ENTRY tgl_context_destroy(tgl_context_t* context) {
	// TODO: destroy context
	TGL_UNUSED(context);
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