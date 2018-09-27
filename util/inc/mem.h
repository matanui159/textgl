#ifndef TGL_MEM_H_
#define TGL_MEM_H_
#include "util.h"

void* tgl_mem_create(intptr_t size);
void tgl_mem_destroy(void* ptr);
void* tgl_mem_resize(void* ptr, intptr_t size);
intptr_t tgl_mem_size(void* ptr);

#endif