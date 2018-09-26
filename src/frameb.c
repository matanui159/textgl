#include "frameb.h"

static tgl_texture_t g_def_color;
static tgl_frameb_t g_def_frameb;

void tgl_frameb_init() {
	tgl_texture_create(&g_def_color);
	g_def_frameb.color = &g_def_color;
	g_def_frameb.depth = NULL;
	g_def_frameb.stencil = NULL;
	tgl_frameb_resize();
}

void tgl_frameb_exit() {
	tgl_texture_destroy(&g_def_color);
}

void tgl_frameb_resize() {
	tgl_texture_resize(&g_def_color, 8, 8);
}

tgl_frameb_t* tgl_frameb_get() {
	return &g_def_frameb;
}