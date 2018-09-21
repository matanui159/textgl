#include "array.h"
#include "error.h"
#include <stdlib.h>

void tgl_array_create(tgl_array_t* array, GLsizeiptr elem_size) {
	array->data = NULL;
	array->elem_size = elem_size;
	array->size = 0;
	array->cap = 0;
}

void tgl_array_destroy(tgl_array_t* array) {
	free(array->data);
}

void tgl_array_resize(tgl_array_t* array, GLsizeiptr size) {
	if (size > array->cap) {
		array->cap *= 2;
		if (size > array->cap) {
			array->cap = size;
		}
		array->data = realloc(array->data, array->cap * array->elem_size);
		if (array->data == NULL) {
			tgl_error_set(GL_OUT_OF_MEMORY);
			return;
		}
	}
	array->size = size;
}

void* tgl_array_get(tgl_array_t* array, GLintptr index) {
	return array->data + index * array->elem_size;
}