#ifndef TEST_H_
#define TEST_H_
#include <stdbool.h>
#include <stdio.h>

void test_begin();
void test_end();
void test_check(bool cond, const char* name, int line, const char* msg);

#define TEST_BEGIN(name) \
static __attribute__((constructor)) void test_##name() { \
	const char* _tname = #name; \
	test_begin(); \
	do

#define TEST_END \
	while (0); \
	test_end(); \
	printf("- %s: all checks passed\n", _tname); \
}

#define TEST_CHECK(cond) test_check(cond, _tname, __LINE__, #cond)

#endif