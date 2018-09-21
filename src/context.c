#include <tgl.h>
#include "error.h"
#include "buffer.h"
#include <windows.h>

GL_APICALL void GL_APIENTRY tglInitialize() {
	tgl_error_init();
	tgl_buffer_init();
}

GL_APICALL void GL_APIENTRY tglTerminate() {
	tgl_buffer_exit();
	tgl_error_exit();
}