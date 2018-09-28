#include "test.h"

void tgl_mem_test();
void tgl_heap_test();

int main() {
	tgl_mem_test();
	tgl_heap_test();
	return tgl_test_results("util");
}