#ifndef TGL_NATIVE_H_
#define TGL_NATIVE_H_
#include <GLES2/gl2.h>

void tgl_native_init();
void tgl_native_exit();
void tgl_native_size(GLint* width, GLint* height);
GLboolean tgl_native_update(GLint width, GLint height, const GLushort* display);

#endif