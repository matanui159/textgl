#include <tgl/context.h>
#include <stdio.h>

void test_group_error();
void test_group_buffer();
void test_group_get();

int g_test_pass = 0;
int g_test_fail = 0;

int main() {
	tgl_context_init();

	test_group_error();
	test_group_buffer();
	test_group_get();

	tgl_context_exit();
	printf("RESULTS:\n - PASS: %i\n - FAIL: %i\n", g_test_pass, g_test_fail);
	getchar();
}