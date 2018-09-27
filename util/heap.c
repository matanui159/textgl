#include "heap.h"
#include "mem.h"
#include <stdint.h>
#include <limits.h>

struct tgl_heap_entry_t {
	tgl_heap_entry_t* next;
	unsigned name;
	bool created;
};

static tgl_heap_entry_t* heap_get(tgl_heap_t* heap, unsigned name, tgl_heap_entry_t** prev) {
	tgl_heap_entry_t* temp;
	if (prev == NULL) {
		prev = &temp;
	}

	*prev = NULL;
	tgl_heap_entry_t* entry = heap->entries;
	for (; entry != NULL; entry = entry->next) {
		if (entry->name == name) {
			return entry;
		} else if (entry->name > name) {
			return NULL;
		} else {
			*prev = entry;
		}
	}
	return NULL;
}

static tgl_heap_entry_t* heap_add(tgl_heap_t* heap, unsigned name) {
	tgl_heap_entry_t* prev;
	tgl_heap_entry_t* entry = heap_get(heap, name, &prev);
	if (entry == NULL) {
		entry = tgl_mem_create(sizeof(tgl_heap_entry_t) + heap->elem_size);
		entry->name = name;
		entry->created = false;
		if (prev == NULL) {
			entry->next = heap->entries;
			heap->entries = entry;
		} else {
			entry->next = prev->next;
			prev->next = entry;
		}
	}
	return entry;
}

static GLuint* heap_gen(tgl_heap_t* heap, unsigned start, unsigned end, int* size, unsigned* names) {
	for (GLuint i = start; i < end; ++i) {
		heap_add(heap, i);
		*(names++) = i;
		if (--*size == 0) {
			break;
		}
	}
	return names;
}

void tgl_heap_create(tgl_heap_t* heap, int elem_size, tgl_heap_create_t create, tgl_heap_destroy_t destroy) {
	heap->entries = NULL;
	heap->elem_size = elem_size;
	heap->create = create;
	heap->destroy = destroy;
}

void tgl_heap_destroy(tgl_heap_t* heap) {
	tgl_heap_entry_t* entry = heap->entries;
	while (entry != NULL) {
		tgl_heap_entry_t* next = entry->next;
		if (entry->created) {
			heap->destroy(entry + 1);
		}
		tgl_mem_destroy(entry);
		entry = next;
	}
}

void tgl_heap_gen(tgl_heap_t* heap, int size, unsigned* names) {
	if (size == 0) {
		return;
	}

	GLuint start = 1;
	tgl_heap_entry_t* entry = heap->entries;
	for (; entry != NULL; entry = entry->next) {
		names = heap_gen(heap, start, entry->name, &size, names);
		if (size == 0) {
			return;
		}
		start = entry->name + 1;
	}
	heap_gen(heap, start, UINT_MAX, &size, names);
}

void tgl_heap_delete(tgl_heap_t* heap, int size, const unsigned* names) {
	for (GLsizei i = 0; i < size; ++i) {
		tgl_heap_entry_t* prev;
		tgl_heap_entry_t* entry = heap_get(heap, names[i], &prev);
		if (entry != NULL) {
			if (prev == NULL) {
				heap->entries = entry->next;
			} else {
				prev->next = entry->next;
			}
			if (entry->created) {
				heap->destroy(entry + 1);
			}
			tgl_mem_destroy(entry);
		}
	}
}

void* tgl_heap_get(tgl_heap_t* heap, unsigned name) {
	if (name == 0) {
		return NULL;
	}

	tgl_heap_entry_t* entry = heap_add(heap, name);
	if (!entry->created) {
		heap->create(entry + 1);
		entry->created = true;
	}
	return entry + 1;
}

bool tgl_heap_is(tgl_heap_t* heap, GLuint name) {
	tgl_heap_entry_t* entry = heap_get(heap, name, NULL);
	if (entry != NULL && entry->created) {
		return true;
	} else {
		return false;
	}
}

GLuint tgl_heap_name(tgl_heap_t* heap, void* obj) {
	TGL_UNUSED(heap);
	if (obj == NULL) {
		return 0;
	} else {
		tgl_heap_entry_t* entry = (tgl_heap_entry_t*)obj - 1;
		return entry->name;
	}
}