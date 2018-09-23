#include "test.h"

GLint g_test_pass = 0;
GLint g_test_fail = 0;

int main() {
	puts("\n- RESULTS");
	printf(" * PASS: %i\n", g_test_pass);
	printf(" ! FAIL: %i\n", g_test_fail);
	return 0;
}