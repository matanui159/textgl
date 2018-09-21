#ifndef TEST_H_
#define TEST_H_
#include <GLES2/gl2.h>
#include <tgl.h>
#include <stdio.h>

#define TEST_(name) test_##name()

#define TEST__BEGIN(name) \
_Bool __attribute__((constructor)) TEST_(name) { \
	static int _tstate = -1; \
	const char _tname[] = #name; \
	if (_tstate == -1) { \
		do

#define TEST_END \
		while (0); \
		printf("%s (%s)\n", _tname, __FILE__); \
		_tstate = 1; \
		tglTerminate(); \
	} \
	return _tstate; \
}

#define TEST_READY tglInitialize()

#define TEST__CHECK(cond, desc) do { \
	if (!(cond)) { \
		printf("%s (%s) %s (line %i)\n", _tname, __FILE__, \
			desc, __LINE__); \
		_tstate = 0; \
		tglTerminate(); \
		return _tstate; \
	} \
} while (0)

#define TEST_CHECK(cond) TEST__CHECK(cond, "!C " #cond)
#define TEST_ERROR(error) TEST__CHECK(glGetError() == error, "!E " #error)

#define TEST_IMPORT(name) _Bool TEST_(name)
#define TEST_REQUIRE(name) TEST__CHECK(TEST_(name), "!R " #name)

TEST_IMPORT(glGetError);

#define TEST_BEGIN(name) \
	TEST__BEGIN(name) { \
	} while (0); \
	TEST_REQUIRE(glGetError); \
	do

#endif