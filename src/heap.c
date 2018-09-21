#include "heap.h"
#include "error.h"

typedef enum heap_state_t {
	HEAP_UNUSED,
	HEAP_USED,
	HEAP_CREATED
} heap_state_t;

static heap_state_t* heap_get(tgl_heap_t* heap, GLuint name, void** obj) {
	_Bool resize = 0;
	if (name >= (GLuint)heap->array.size) {
		tgl_array_resize(&heap->array, name + 1);
		resize = 1;
	}
	heap_state_t* state = tgl_array_get(&heap->array, name);
	if (resize) {
		*state = HEAP_UNUSED;
	}
	
	if (obj != NULL) {
		*obj = (void*)(state + 1);
	}
	return state;
}

void tgl_heap_create(tgl_heap_t* heap, GLsizeiptr elem_size,
		tgl_heap_create_t create, tgl_heap_destroy_t destroy) {
	tgl_array_create(&heap->array, sizeof(heap_state_t) + elem_size);
	heap->create = create;
	heap->destroy = destroy;
}

void tgl_heap_destroy(tgl_heap_t* heap) {
	for (GLintptr i = 0; i < heap->array.size; ++i) {
		void* obj;
		heap_state_t* state = heap_get(heap, i, &obj);
		if (*state == HEAP_CREATED) {
			heap->destroy(obj);
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
			heap_state_t* state = heap_get(heap, name, NULL);
			if (*state == HEAP_UNUSED) {
				*state = HEAP_USED;
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
		if (names[i] != 0) {
			void* obj;
			heap_state_t* state = heap_get(heap, names[i], &obj);
			if (*state != HEAP_UNUSED) {
				if (*state == HEAP_CREATED) {
					heap->destroy(obj);
				}
				*state = HEAP_UNUSED;
			}
		}
	}
}

void* tgl_heap_get(tgl_heap_t* heap, GLuint name) {
	if (name == 0) {
		return NULL;
	}

	void* obj;
	heap_state_t* state = heap_get(heap, name, &obj);
	if (*state != HEAP_CREATED) {
		heap->create(obj);
		*state = HEAP_CREATED;
	}
	return obj;
}

_Bool tgl_heap_is(tgl_heap_t* heap, GLuint name) {
	if (name == 0) {
		return 0;
	}

	heap_state_t* state = heap_get(heap, name, NULL);
	return *state == HEAP_CREATED;
}