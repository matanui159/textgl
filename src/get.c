#include <GLES2/gl2.h>
#include "error.h"

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
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return NULL;
	}
}