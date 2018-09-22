#include "heap.h"
#include "error.h"

void tgl_heap_create(tgl_heap_t* heap, GLsizei elem_size,
		tgl_heap_create_t create, tgl_heap_destroy_t destroy) {
	tgl_array_create(&heap->array, elem_size + 1);
	heap->create = create;
	heap->destroy = destroy;
}

void tgl_heap_destroy(tgl_heap_t* heap) {
	for (GLintptr i = 0; i < heap->array.size; ++i) {
		_Bool* used = tgl_array_get(&heap->array, i);
		if (*used) {
			heap->destroy(i, used + 1);
		}
	}
	tgl_array_destroy(&heap->array);
}

void tgl_heap_gen(tgl_heap_t* heap, GLsizei size, GLuint* names) {
	if (size < 0) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

	GLuint name = 1;
	for (GLsizei i = 0; i < size; ++i) {
		for (;; ++name) {
			_Bool resize = 0;
			if (name >= (GLuint)heap->array.size) {
				tgl_array_resize(&heap->array, name + 1);
				resize = 1;
			}

			_Bool* used = tgl_array_get(&heap->array, name);
			if (resize || !*used) {
				heap->create(name, used + 1);
				*used = 1;
				names[i] = name;
				break;
			}
		}
	}
}

void tgl_heap_delete(tgl_heap_t* heap, GLsizei size, const GLuint* names) {
	if (size < 0) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

	for (GLsizei i = 0; i < size; ++i) {
		if (names[i] > 0 && names[i] < (GLuint)heap->array.size) {
			_Bool* used = tgl_array_get(&heap->array, names[i]);
			if (*used) {
				heap->destroy(names[i], used + 1);
				*used = 0;
			}
		}
	}
}

void* tgl_heap_get(tgl_heap_t* heap, GLuint name) {
	if (name == 0) {
		return NULL;
	}
	if (name >= (GLuint)heap->array.size) {
		tgl_error_set(GL_INVALID_VALUE);
		return NULL;
	}
	_Bool *used = tgl_array_get(&heap->array, name);
	if (!*used) {
		tgl_error_set(GL_INVALID_VALUE);
		return NULL;
	}

	return used + 1;
}

_Bool tgl_heap_is(tgl_heap_t* heap, GLuint name) {
	if (name == 0 || name >= (GLuint)heap->array.size) {
		return 0;
	}

	_Bool* used = tgl_array_get(&heap->array, name);
	return *used;
}