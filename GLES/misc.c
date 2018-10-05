#include "util.h"
#include "context.h"

void tgl_misc_init(tgl_context_t* context) { 
	context->error = GL_NO_ERROR;
}

void tgl_misc_exit(tgl_context_t* context) {
	TGL_UNUSED(context);
}

TGL_API GLenum TGL_ENTRY glGetError() {
	tgl_context_t* context = tgl_context_get();
	unsigned error = context->error;
	context->error = GL_NO_ERROR;
	return error;
}