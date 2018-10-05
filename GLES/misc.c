#include "util.h"
#include "context.h"

TGL_API GLenum TGL_ENTRY glGetError() {
	tgl_context_t* context = tgl_context_get();
	unsigned error = context->error;
	context->error = GL_NO_ERROR;
	return error;
}