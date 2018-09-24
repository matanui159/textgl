#ifndef TGL_HEAP_H_
#define TGL_HEAP_H_
#include <GLES2/gl2.h>

typedef void (*tgl_heap_create_t)(GLuint name, void* obj);
typedef void (*tgl_heap_destroy_t)(GLuint name, void* obj);

typedef struct tgl_heap_entry_t tgl_heap_entry_t;

typedef struct tgl_heap_t {
	tgl_heap_entry_t* entries;
	GLsizei elem_size;
	tgl_heap_create_t create;
	tgl_heap_destroy_t destroy;
} tgl_heap_t;

void tgl_heap_create(tgl_heap_t* heap, GLsizei elem_size,
	tgl_heap_create_t create, tgl_heap_destroy_t destroy);
void tgl_heap_destroy(tgl_heap_t* heap);
void tgl_heap_gen(tgl_heap_t* heap, GLsizei size, GLuint* names);
void tgl_heap_delete(tgl_heap_t* heap, GLsizei size, const GLuint* names);
void* tgl_heap_get(tgl_heap_t* heap, GLuint name);
GLboolean tgl_heap_is(tgl_heap_t* heap, GLuint name);

#endif