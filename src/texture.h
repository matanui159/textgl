#ifndef TGL_TEXTURE_H_
#define TGL_TEXTURE_H_
#include <GLES2/gl2.h>

typedef struct tgl_texture_t {
	GLubyte* data;
	GLsizei width;
	GLsizei height;
} tgl_texture_t;

void tgl_texture_create(tgl_texture_t* texture);
void tgl_texture_destroy(tgl_texture_t* texture);
void tgl_texture_resize(tgl_texture_t* texture, GLsizei width, GLsizei height);

#endif