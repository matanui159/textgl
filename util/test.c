#include "test.h"
#include <stdio.h>

static int g_fail;

void tgl_test_check(bool cond, const char* msg) {
	if (!cond) {
		++g_fail;
		printf("! %s \n", msg);
	}
}

int tgl_test_results(const char* name) {
	if (g_fail == 0) {
		printf("- %s: all checks passed\n", name);
	} else if (g_fail == 1) {
		printf("^ %s: 1 check failed\n", name);
	} else {
		printf("^ %s: %i checks failed\n", name, g_fail);
	}
	return g_fail;
}