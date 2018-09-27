#ifndef TGL_HEAP_H_
#define TGL_HEAP_H_
#include "util.h"

typedef void (*tgl_heap_create_t)(void* obj);
typedef void (*tgl_heap_destroy_t)(void* obj);

typedef struct tgl_heap_entry_t tgl_heap_entry_t;

typedef struct tgl_heap_t {
	tgl_heap_entry_t* entries;
	int elem_size;
	tgl_heap_create_t create;
	tgl_heap_destroy_t destroy;
} tgl_heap_t;

void tgl_heap_create(tgl_heap_t* heap, int elem_size, tgl_heap_create_t create, tgl_heap_destroy_t destroy);
void tgl_heap_destroy(tgl_heap_t* heap);
void tgl_heap_gen(tgl_heap_t* heap, int size, unsigned* names);
void tgl_heap_delete(tgl_heap_t* heap, int size, const unsigned* names);
void* tgl_heap_get(tgl_heap_t* heap, unsigned name);
bool tgl_heap_is(tgl_heap_t* heap, unsigned name);
unsigned tgl_heap_name(tgl_heap_t* heap, void* obj);

#endif