#include "util.h"
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

TEST_BEGIN(tgl_heap_create) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	bool* created = tgl_heap_get(&heap, 1);
	TEST_CHECK(*created);

	tgl_heap_destroy(&heap);
} TEST_END

TEST_BEGIN(tgl_heap_destroy) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);
	tgl_heap_get(&heap, 1);

	g_destroyed = false;
	tgl_heap_destroy(&heap);
	TEST_CHECK(g_destroyed);
} TEST_END

TEST_BEGIN(tgl_heap_gen) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	unsigned names[3];
	tgl_heap_gen(&heap, 1, names);
	TEST_CHECK(names[0] > 0);
	
	tgl_heap_gen(&heap, 2, names + 1);
	TEST_CHECK(names[1] > 0);
	TEST_CHECK(names[2] > 0);
	TEST_CHECK(names[1] != names[2]);
	TEST_CHECK(names[0] != names[1]);
	TEST_CHECK(names[0] != names[2]);

	tgl_heap_destroy(&heap);
} TEST_END

TEST_BEGIN(tgl_heap_delete) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);
	
	unsigned names[2];
	tgl_heap_gen(&heap, 1, names);
	g_destroyed = false;
	tgl_heap_delete(&heap, 1, names);
	TEST_CHECK(!g_destroyed);

	tgl_heap_gen(&heap, 1, names + 1);
	TEST_CHECK(names[0] == names[1]);
	
	tgl_heap_get(&heap, names[1]);
	tgl_heap_delete(&heap, 1, names + 1);
	TEST_CHECK(g_destroyed);

	g_destroyed = false;
	tgl_heap_delete(&heap, 1, names);
	TEST_CHECK(!g_destroyed);

	tgl_heap_destroy(&heap);
} TEST_END

TEST_BEGIN(tgl_heap_get) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	unsigned name;
	tgl_heap_gen(&heap, 1, &name);
	bool* created = tgl_heap_get(&heap, name);
	TEST_CHECK(*created);

	created = tgl_heap_get(&heap, 8);
	TEST_CHECK(*created);

	TEST_CHECK(tgl_heap_get(&heap, 0) == NULL);

	tgl_heap_destroy(&heap);
} TEST_END

TEST_BEGIN(tgl_heap_is) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	TEST_CHECK(!tgl_heap_is(&heap, 1));

	unsigned name;
	tgl_heap_gen(&heap, 1, &name);
	TEST_CHECK(!tgl_heap_is(&heap, name));

	tgl_heap_get(&heap, name);
	TEST_CHECK(tgl_heap_is(&heap, name));

	tgl_heap_destroy(&heap);
} TEST_END

TEST_BEGIN(tgl_heap_name) {
	tgl_heap_t heap;
	tgl_heap_create(&heap, 1, test_create, test_destroy);

	bool* created = tgl_heap_get(&heap, 1);
	TEST_CHECK(tgl_heap_name(&heap, created) == 1);

	TEST_CHECK(tgl_heap_name(&heap, NULL) == 0);

	tgl_heap_destroy(&heap);
} TEST_END