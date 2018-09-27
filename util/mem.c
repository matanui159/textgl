#include "mem.h"
#include <stdlib.h>

typedef struct mem_t {
	intptr_t size;
	intptr_t cap;
} mem_t;

void* tgl_mem_create(intptr_t size) {
	return tgl_mem_resize(NULL, size);
}

void tgl_mem_destroy(void* ptr) {
	if (ptr != NULL) {
		mem_t* mem = (mem_t*)ptr - 1;
		free(mem);
	}
}

void* tgl_mem_resize(void* ptr, intptr_t size) {
	mem_t* mem = NULL;
	intptr_t cap = -1;
	if (ptr != NULL) {
		mem = (mem_t*)ptr - 1;
		cap = mem->cap;
	}

	if (size > cap) {
		cap *= 2;
		if (size > cap) {
			cap = size;
		}
		mem = realloc(mem, cap + sizeof(mem_t));
		mem->cap = cap;
	}
	mem->size = size;
	return mem + 1;
}

intptr_t tgl_mem_size(void* ptr) {
	if (ptr == NULL) {
		return 0;
	} else {
		mem_t* mem = (mem_t*)ptr - 1;
		return mem->size;
	}
}