#ifndef TGL_ERROR_H_
#define TGL_ERROR_H_
#include <GLES2/gl2.h>

void tgl_error_init();
void tgl_error_set(GLenum error);

#endif