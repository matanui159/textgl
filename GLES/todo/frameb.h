#ifndef TGL_FRAME_H_
#define TGL_FRAME_H_
#include <GLES2/gl2.h>
#include "texture.h"

typedef struct tgl_frameb_t {
	tgl_texture_t* color;
	tgl_texture_t* depth;
	tgl_texture_t* stencil;
} tgl_frameb_t;

void tgl_frameb_init();
void tgl_frameb_exit();
void tgl_frameb_resize();
tgl_frameb_t* tgl_frameb_get();

#endif