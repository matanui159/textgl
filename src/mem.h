#ifndef TGL_MEM_H_
#define TGL_MEM_H_
#include <GLES2/gl2.h>

void* tgl_mem_create(GLsizeiptr size);
void tgl_mem_destroy(void* ptr);
void* tgl_mem_resize(void* ptr, GLsizeiptr size);
GLsizeiptr tgl_mem_size(void* ptr);

#endif