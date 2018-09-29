#include "test.h"

void test_check(bool cond, const char* name, int line, const char* msg) {
	if (!cond) {
		printf("! %s[%i]: %s\n", name, line, msg);
	}
}

int main() {
	return 0;
}