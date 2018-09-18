#include "error.h"

static GLenum g_error;

void tgl_error_init() {
	g_error = GL_NO_ERROR;
}

void tgl_error_exit() {
}

void tgl_error_set(GLenum error) {
	g_error = error;
}

GL_APICALL GLenum GL_APIENTRY glGetError() {
	GLenum error = g_error;
	g_error = GL_NO_ERROR;
	return error;
}