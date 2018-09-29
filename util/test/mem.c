#include "util.h"
#include "test.h"

TEST_BEGIN(tgl_mem_create) {
	int8_t* ptr = tgl_mem_create(8);
	TEST_CHECK(tgl_mem_size(ptr) == 8);

	ptr[4] = 16;
	TEST_CHECK(ptr[4] == 16);

	tgl_mem_destroy(ptr);
} TEST_END

TEST_BEGIN(tgl_mem_destroy) {
	int8_t* ptr = tgl_mem_create(8);
	tgl_mem_destroy(ptr);

	tgl_mem_destroy(NULL);
} TEST_END

TEST_BEGIN(tgl_mem_resize) {
	int8_t* ptr = tgl_mem_create(8);
	ptr[4] = 16;

	ptr = tgl_mem_resize(ptr, 16);
	TEST_CHECK(tgl_mem_size(ptr) == 16);
	TEST_CHECK(ptr[4] == 16);
	ptr[12] = 32;
	TEST_CHECK(ptr[12] == 32);

	ptr = tgl_mem_resize(ptr, 4);
	TEST_CHECK(tgl_mem_size(ptr) == 4);
	ptr[2] = 8;
	TEST_CHECK(ptr[2] == 8);	

	tgl_mem_destroy(ptr);
	ptr = tgl_mem_resize(NULL, 8);
	TEST_CHECK(tgl_mem_size(ptr) == 8);
	ptr[4] = 16;
	TEST_CHECK(ptr[4] == 16);
} TEST_END

TEST_BEGIN(tgl_mem_size) {
	int8_t* ptr = tgl_mem_create(8);
	TEST_CHECK(tgl_mem_size(ptr) == 8);
	tgl_mem_destroy(ptr);

	TEST_CHECK(tgl_mem_size(NULL) == 0);
} TEST_END