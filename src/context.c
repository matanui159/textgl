#include <tgl/context.h>
#include "error.h"
#include "buffer.h"

void tgl_context_init() {
	tgl_error_init();
	tgl_buffer_init();
}

void tgl_context_exit() {
	tgl_buffer_exit();
	tgl_error_exit();
}