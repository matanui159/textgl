#ifndef TEST_H_
#define TEST_H_
#include <stdio.h>

extern int g_test_pass;
extern int g_test_fail;

#define TEST__STRING(value) #value
#define TEST_STRING(value) TEST__STRING(value)
#define TEST_LINE TEST_STRING(__LINE__)

#define TEST_GROUP(name) puts(#name " (" __FILE__ "):")
#define TEST_FUNC(name) puts(" - " #name)
#define TEST_CHECK(expr) if (expr) {\
	++g_test_pass; \
} else { \
	puts("  ! " #expr " (line " TEST_LINE ") failed"); \
	++g_test_fail; \
}

#endif