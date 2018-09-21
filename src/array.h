#ifndef TGL_ARRAY_H_
#define TGL_ARRAY_H_
#include <GLES2/gl2.h>

typedef struct tgl_array_t {
	void* data;
	GLsizeiptr elem_size;
	GLsizeiptr size;
	GLsizeiptr cap;
} tgl_array_t;

void tgl_array_create(tgl_array_t* array, GLsizeiptr elem_size);
void tgl_array_destroy(tgl_array_t* array);
void tgl_array_resize(tgl_array_t* array, GLsizeiptr size);
void* tgl_array_get(tgl_array_t* array, GLintptr index);

#endif