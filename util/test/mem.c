#include "test.h"

void tgl_mem_test() {
	int8_t* ptr = tgl_mem_create(8);
	TGL_CHECK(tgl_mem_size(ptr) == 8);
	ptr[4] = 0;

	ptr = tgl_mem_resize(ptr, 16);
	TGL_CHECK(tgl_mem_size(ptr) == 16);
	ptr[12] = 0;

	ptr = tgl_mem_resize(ptr, 4);
	TGL_CHECK(tgl_mem_size(ptr) == 4);
	ptr[2] = 0;

	tgl_mem_destroy(ptr);
	TGL_CHECK(tgl_mem_size(NULL) == 0);

	ptr = tgl_mem_resize(NULL, 8);
	TGL_CHECK(tgl_mem_size(ptr) == 8);
	ptr[4] = 0;
	tgl_mem_destroy(ptr);
}