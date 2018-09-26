#ifndef TGL_TEXTURE_H_
#define TGL_TEXTURE_H_
#include <GLES2/gl2.h>
#include <mmintrin.h>

typedef union tgl_pixel_t {
	struct {
		GLubyte r;
		GLubyte g;
		GLubyte b;
		GLubyte a;
	};
	__m64 vector;
} tgl_pixel_t;

typedef struct tgl_texture_t {
	tgl_pixel_t* data;
	GLsizei width;
	GLsizei height;
} tgl_texture_t;

void tgl_texture_create(tgl_texture_t* texture);
void tgl_texture_destroy(tgl_texture_t* texture);
void tgl_texture_resize(tgl_texture_t* texture, GLsizei width, GLsizei height);

#endif