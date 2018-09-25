#ifndef TGL_FRAME_H_
#define TGL_FRAME_H_
#include <GLES2/gl2.h>
#include "texture.h"

typedef struct tgl_frame_t {
	tgl_texture_t* color;
	tgl_texture_t* depth;
	tgl_texture_t* stencil;
} tgl_frame_t;

void frame_init();
void frame_exit();

#endif