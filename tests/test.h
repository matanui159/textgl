#ifndef TEST_H_
#define TEST_H_
#include <GLES2/gl2.h>
#include <tgl.h>
#include <stdio.h>

_Bool test_vint(int index, GLint* value, const char* format);
_Bool test_venum(int index, GLenum* value, int size, GLenum* list);

#define TEST_TYPE(name) PFN##name##PROC
#define TEST_FUNC(name) test_##name

#define TEST_CHECK(cond) do { \
	if (!(cond)) { \
		puts(" ! " #cond); \
		_tproc = NULL; \
		return _tproc; \
	} \
} while (0)

#define TEST_BEGIN(name, NAME) \
	TEST_TYPE(NAME) __attribute__((constructor)) TEST_FUNC(name)() { \
		static _Bool _trun = 0; \
		static TEST_TYPE(NAME) _tproc; \
		if (!_trun) { \
			_trun = 1; \
			printf(#name); \
			tglInitialize(); \
			_tproc = (TEST_TYPE(NAME))tglGetProcAddress(#name); \
			TEST_TYPE(NAME) name = _tproc; \
			TEST_CHECK(name != NULL); \
			do

#define TEST_END \
			while (0); \
			puts(" *"); \
		} \
		return _tproc; \
	}

#define TEST_IMPORT(name, NAME) TEST_TYPE(NAME) TEST_FUNC(name)();
#define TEST_REQUIRE(name, NAME) do { \
	TEST_TYPE(NAME) name = TEST_FUNC(name); \
	TEST_CHECK(name != NULL) \
} while (0)

#define TEST_VITER(name, type, func, args...) \
	type name; \
	int name##_index = 0; \
	while (func(name##_index, &name, args))

#define TEST_VINT(name, format) TEST_VITER(name, GLint, test_vint, #format)
#define TEST_VENUM(name, values...) \
	GLenum name##_values[] = {values}; \
	int name##_size = sizeof(name##_values) / sizeof(GLenum); \
	TEST_VITER(name, GLenum, test_venum, name##_size, name##_values)

#endif