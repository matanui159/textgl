#include <tgl.h>
#include "error.h"
#include "buffer.h"

GL_APICALL void GL_APIENTRY tgl_init() {
	tgl_error_init();
	tgl_buffer_init();
}

GL_APICALL void GL_APIENTRY tgl_exit() {
	tgl_buffer_exit();
	tgl_error_exit();
}