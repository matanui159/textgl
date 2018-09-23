#ifndef TEST_H_
#define TEST_H_
#include <tgl.h>
#include <stdio.h>
#include <string.h>

extern GLint g_test_pass;
extern GLint g_test_fail;

#define TEST__STRING(value) #value
#define TEST_STRING(value) TEST__STRING(value)
#define TEST_LINE TEST_STRING(__LINE__)

#define TEST_BEGIN(name) \
static void __attribute__((constructor)) test_##name() { \
	puts("\n- " #name " (" __FILE__ ")"); \
	tgl_init(); \
	do

#define TEST_END \
	while (0); \
	tgl_exit(); \
}

#define TEST__CHECK(cond, desc) do { \
	if (cond) {\
		++g_test_pass; \
		printf(" * "); \
	} else { \
		++g_test_fail; \
		printf(" ! "); \
	} \
	puts(desc " (line " TEST_LINE ")"); \
} while (0)

#define TEST_CHECK(cond) TEST__CHECK(cond, #cond)
#define TEST_ERROR(error) TEST__CHECK( \
	glGetError() == error, \
	"glGetError() == " #error \
)

#endif