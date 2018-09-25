#include "texture.h"
#include "error.h"
#include "mem.h"

void tgl_texture_create(tgl_texture_t* texture) {
	texture->data = NULL;
	texture->width = 0;
	texture->height = 0;
}

void tgl_texture_destroy(tgl_texture_t* texture) {
	tgl_mem_destroy(texture->data);
}

void tgl_texture_resize(tgl_texture_t* texture, GLsizei width, GLsizei height) {
	texture->data = tgl_mem_resize(texture->data, width * height * 4);
	if (texture->data == NULL) {
		tgl_error_set(GL_OUT_OF_MEMORY);
		return;
	}
}