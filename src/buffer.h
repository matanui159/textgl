#ifndef TGL_BUFFER_H_
#define TGL_BUFFER_H_
#include <GLES2/gl2.h>
#include "array.h"

typedef struct tgl_buffer_t {
	tgl_array_t array;
	GLenum usage;
} tgl_buffer_t;

void tgl_buffer_init();
void tgl_buffer_exit();
GLint tgl_buffer_info(GLenum query, GLfloat* values);
tgl_buffer_t* tgl_buffer_get(GLuint buffer);

#endif