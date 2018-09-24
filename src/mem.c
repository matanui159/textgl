#include "mem.h"
#include "error.h"
#include <stdlib.h>

typedef struct mem_t {
	GLsizeiptr size;
	GLsizeiptr cap;
} mem_t;

void* tgl_mem_create(GLsizeiptr size) {
	return tgl_mem_resize(NULL, size);
}

void tgl_mem_destroy(void* ptr) {
	if (ptr != NULL) {
		mem_t* mem = (mem_t*)ptr - 1;
		free(mem);
	}
}

void* tgl_mem_resize(void* ptr, GLsizeiptr size) {
	mem_t* mem = NULL;
	GLsizeiptr cap = -1;
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
		if (mem == NULL) {
			tgl_error_set(GL_OUT_OF_MEMORY);
			return NULL;
		}
		mem->cap = cap;
	}
	mem->size = size;
	return mem + 1;
}

GLsizeiptr tgl_mem_size(void* ptr) {
	if (ptr == NULL) {
		return 0;
	} else {
		mem_t* mem = (mem_t*)ptr - 1;
		return mem->size;
	}
}