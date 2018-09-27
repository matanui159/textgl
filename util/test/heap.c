#include "test.h"

static void test_create(void* obj) {
	bool* created = obj;
	*created = true;
}

static bool g_destroyed;
static void test_destroy(void* obj) {
	TGL_UNUSED(obj);
	g_destroyed = true;
}

void tgl_heap_test() {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	unsigned names[3];
	tgl_heap_gen(&heap, 1, names);
	TGL_CHECK(names[0] > 0);

	tgl_heap_gen(&heap, 2, names + 1);
	TGL_CHECK(names[1] > 0);
	TGL_CHECK(names[2] > 0);
	TGL_CHECK(names[1] != names[2]);
	TGL_CHECK(names[0] != names[1]);
	TGL_CHECK(names[0] != names[2]);

	bool* created = tgl_heap_get(&heap, names[0]);
	TGL_CHECK(created);

	created = tgl_heap_get(&heap, 8);
	TGL_CHECK(created);

	TGL_CHECK(tgl_heap_get(&heap, 0) == NULL);

	TGL_CHECK(!tgl_heap_is(&heap, 16));
	TGL_CHECK(!tgl_heap_is(&heap, names[1]));
	TGL_CHECK(tgl_heap_is(&heap, names[0]));
	TGL_CHECK(tgl_heap_is(&heap, 8));

	TGL_CHECK(tgl_heap_name(&heap, created) == 8);
	TGL_CHECK(tgl_heap_name(&heap, NULL) == 0);

	g_destroyed = false;
	tgl_heap_delete(&heap, 1, names);
	TGL_CHECK(g_destroyed);

	g_destroyed = false;
	names[0] = 32;
	tgl_heap_delete(&heap, 1, names);
	TGL_CHECK(!g_destroyed);

	g_destroyed = false;
	tgl_heap_destroy(&heap);
	TGL_CHECK(g_destroyed);
}