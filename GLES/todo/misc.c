#include "misc.h"
#include "error.h"
#include "buffer.h"

static GLenum g_mipmap;

static GLint misc_get(GLenum query, GLfloat* values) {
	switch (query) {
		case GL_ARRAY_BUFFER_BINDING:
		case GL_ELEMENT_ARRAY_BUFFER_BINDING:
			return tgl_buffer_info(query, values);
		case GL_GENERATE_MIPMAP_HINT:
			values[0] = g_mipmap;
			return 1;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return 0;
	}
}

void tgl_misc_init() {
	g_mipmap = GL_DONT_CARE;
}

void tgl_misc_exit() {
}

GL_APICALL void GL_APIENTRY glGetFloatv(GLenum query, GLfloat* values) {
	if (values == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

	misc_get(query, values);
}

GL_APICALL void GL_APIENTRY glGetIntegerv(GLenum query, GLint* values) {
	if (values == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

	GLfloat results[8];
	GLint size = misc_get(query, results);
	for (GLint i = 0; i < size; ++i) {
		values[i] = results[i];
	}
}

GL_APICALL void GL_APIENTRY glGetBooleanv(GLenum query, GLboolean* values) {
	if (values == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}
	
	GLfloat results[8];
	GLint size = misc_get(query, results);
	for (GLint i = 0; i < size; ++i) {
		if (results[i] == 0) {
			values[i] = GL_FALSE;
		} else {
			values[i] = GL_TRUE;
		}
	}
}

GL_APICALL const GLubyte* GL_APIENTRY glGetString(GLenum name) {
	switch (name) {
		case GL_VENDOR:
			return (GLubyte*)"Joshua Minter";
		case GL_RENDERER:
			return (GLubyte*)"ASCII";
		case GL_VERSION:
			return (GLubyte*)"OpenGL ES 2.0 tgl-0.1.0";
		case GL_SHADING_LANGUAGE_VERSION:
			// TODO: check if glslang has its own version string
			return (GLubyte*)"OpenGL ES GLSL ES 1.00 glslang";
		case GL_EXTENSIONS:
			return (GLubyte*)"";
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return NULL;
	}
}

GL_APICALL void GL_APIENTRY glFlush() {
}

GL_APICALL void GL_APIENTRY glFinish() {
}

GL_APICALL void GL_APIENTRY glHint(GLenum target, GLenum hint) {
	switch (hint) {
		case GL_FASTEST:
		case GL_NICEST:
		case GL_DONT_CARE:
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}

	switch (target) {
		case GL_GENERATE_MIPMAP_HINT:
			g_mipmap = hint;
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}
}