#include "test.h"
#include <stdlib.h>

void test_check(bool cond, const char* name, int line, const char* msg) {
	if (!cond) {
		fprintf(stderr, "! %s[%i]: %s\n", name, line, msg);
		exit(EXIT_FAILURE);
	}
}

int main() {
	return 0;
}