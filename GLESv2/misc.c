#include "util.h"

GL_APICALL GLenum GL_APIENTRY glGetError() {
	tgl_context_t* context = tgl_context_get();
	unsigned error = context->error;
	context->error = GL_NO_ERROR;
	return error;
}