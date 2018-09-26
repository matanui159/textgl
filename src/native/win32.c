#include "native.h"
#include <windows.h>

void tgl_native_init() {
}

void tgl_native_exit() {
}

void tgl_native_size(GLint* width, GLint* height) {
	*width = 8;
	*height = 8;
}

GLboolean tgl_native_update(GLint width, GLint height, const GLushort* display) {
	((void)width);
	((void)height);
	((void)display);
	return GL_FALSE;
}