#include <tgl/context.h>
#include <stdio.h>

void test_group_error();
void test_group_buffer();
void test_group_get();

_Bool g_test_fail = 0;

int main() {
	tgl_context_init();

	test_group_error();
	test_group_buffer();
	test_group_get();

	tgl_context_exit();
	if (!g_test_fail) {
		puts("* All tests passed");
	}
	for (;;);
}