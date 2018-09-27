#ifndef TGL_TEST_H_
#define TGL_TEST_H_
#include "util.h"
#include <stdio.h>

#define TGL__STRING(value) #value
#define TGL_STRING(value) TGL__STRING(value)
#define TGL_LINE TGL_STRING(__LINE__)

void tgl_test_check(bool cond, const char* msg);
int tgl_test_results(const char* name);

#define TGL_CHECK(cond) tgl_test_check(cond, __FILE__ ":" TGL_LINE ": " #cond)

#endif