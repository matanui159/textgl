#include <tgl.h>
#include "mem.h"
#include "error.h"
#include "buffer.h"
#include "frameb.h"
#include "draw.h"
#include "misc.h"
#include "native/native.h"

static GLint g_width;
static GLint g_height;
static GLushort* g_display;

static void tgl_resize() {
	tgl_native_size(&g_width, &g_height);
	tgl_mem_resize(g_display, g_width * g_height * sizeof(GLushort));
}

GL_APICALL void GL_APIENTRY tgl_init() {
	tgl_native_init();
	tgl_error_init();
	tgl_buffer_init();
	tgl_frameb_init();
	tgl_draw_init();
	tgl_misc_init();
}

GL_APICALL void GL_APIENTRY tgl_exit() {
	tgl_misc_exit();
	tgl_draw_exit();
	tgl_frameb_exit();
	tgl_buffer_exit();
	tgl_error_exit();
	tgl_native_exit();
}

GL_APICALL void GL_APIENTRY tgl_update() {
	for (GLint i = 0; i < g_width * g_height; ++i) {
		g_display[i] = 'A';
	}

	if (tgl_native_update(g_width, g_height, g_display)) {
		tgl_resize();
		tgl_frameb_resize();
	}
}