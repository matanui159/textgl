#include "heap.h"
#include "error.h"
#include <stdlib.h>
#include <stdint.h>

struct tgl_heap_entry_t {
	tgl_heap_entry_t* next;
	GLuint name;
	GLboolean created;
};

static tgl_heap_entry_t* heap_get(tgl_heap_t* heap, GLuint name,
		tgl_heap_entry_t** prev) {
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

static tgl_heap_entry_t* heap_add(tgl_heap_t* heap, GLuint name) {
	tgl_heap_entry_t* prev;
	tgl_heap_entry_t* entry = heap_get(heap, name, &prev);
	if (entry == NULL) {
		entry = malloc(sizeof(tgl_heap_entry_t) + heap->elem_size);
		if (entry == NULL) {
			tgl_error_set(GL_OUT_OF_MEMORY);
			return NULL;
		}

		entry->name = name;
		entry->created = GL_FALSE;
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

static GLuint* heap_gen(tgl_heap_t* heap, GLuint start, GLuint end,
		GLsizei* size, GLuint* names) {
	for (GLuint i = start; i < end; ++i) {
		if (heap_add(heap, i) == NULL) {
			return NULL;
		}

		*(names++) = i;
		if (--*size == 0) {
			return NULL;
		}
	}
	return names;
}

void tgl_heap_create(tgl_heap_t* heap, GLsizei elem_size,
		tgl_heap_create_t create, tgl_heap_destroy_t destroy) {
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
			heap->destroy(entry->name, entry + 1);
		}
		free(entry);
		entry = next;
	}
}

void tgl_heap_gen(tgl_heap_t* heap, GLsizei size, GLuint* names) {
	if (size < 0 || names == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}
	if (size == 0) {
		return;
	}

	GLuint start = 1;
	tgl_heap_entry_t* entry = heap->entries;
	for (; entry != NULL; entry = entry->next) {
		names = heap_gen(heap, start, entry->name, &size, names);
		if (names == NULL) {
			return;
		}
		start = entry->name + 1;
	}
	heap_gen(heap, start, UINT32_MAX, &size, names);
}

void tgl_heap_delete(tgl_heap_t* heap, GLsizei size, const GLuint* names) {
	if (size < 0 || names == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

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
				heap->destroy(names[i], entry + 1);
			}
			free(entry);
		}
	}
}

void* tgl_heap_get(tgl_heap_t* heap, GLuint name) {
	if (name == 0) {
		return NULL;
	}

	tgl_heap_entry_t* entry = heap_add(heap, name);
	if (!entry->created) {
		heap->create(name, entry + 1);
	}
	return entry + 1;
}

GLboolean tgl_heap_is(tgl_heap_t* heap, GLuint name) {
	tgl_heap_entry_t* entry = heap_get(heap, name, NULL);
	if (entry != NULL && entry->created) {
		return GL_TRUE;
	} else {
		return GL_FALSE;
	}
}