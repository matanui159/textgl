#include "draw.h"
#include "frameb.h"

static tgl_pixel_t g_clear_color;

void tgl_draw_init() {
	g_clear_color.vector = _mm_setzero_si64();
}

void tgl_draw_exit() {
}

GL_APICALL void GL_APIENTRY glClearColor(GLfloat r, GLfloat g,
		GLfloat b, GLfloat a) {
	g_clear_color.r = r;
	g_clear_color.g = g;
	g_clear_color.b = b;
	g_clear_color.a = a;
}

GL_APICALL void GL_APIENTRY glClear(GLbitfield buffers) {
	if (buffers & GL_COLOR_BUFFER_BIT) {
		tgl_texture_t* color = tgl_frameb_get()->color;
		for (GLint y = 0; y < color->width; ++y) {
			for (GLint x = 0; x < color->height; ++x) {
				color->data[y * color->width + x] = g_clear_color;
			}
		}
	}
}