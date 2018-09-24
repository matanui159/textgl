#include "buffer.h"
#include "error.h"
#include "mem.h"
#include "heap.h"
#include <string.h>

static tgl_heap_t g_heap;
static tgl_buffer_t* g_array;
static tgl_buffer_t* g_elements;

static void buffer_create(void* obj) {
	tgl_buffer_t* buffer = obj;
	buffer->data = NULL;
	buffer->usage = GL_STATIC_DRAW;
}

static void buffer_destroy(void* obj) {
	tgl_buffer_t* buffer = obj;
	tgl_mem_destroy(buffer->data);
	if (buffer == g_array) {
		g_array = NULL;
	}
	if (buffer == g_elements) {
		g_elements = NULL;
	}
}

void tgl_buffer_init() {
	tgl_heap_create(&g_heap, sizeof(tgl_buffer_t),
		buffer_create, buffer_destroy);
	g_array = NULL;
	g_elements = NULL;
}

void tgl_buffer_exit() {
	tgl_heap_destroy(&g_heap);
}

GLint tgl_buffer_info(GLenum query, GLfloat* values) {
	switch (query) {
		case GL_ARRAY_BUFFER_BINDING:
			values[0] = tgl_heap_name(&g_heap, g_array);
			return 1;
		case GL_ELEMENT_ARRAY_BUFFER:
			values[0] = tgl_heap_name(&g_heap, g_elements);
			return 1;
		default:
			return 0;
	}
}

tgl_buffer_t* tgl_buffer_get(GLenum target, GLboolean zero) {
	tgl_buffer_t* buffer = NULL;
	switch (target) {
		case GL_ARRAY_BUFFER:
			buffer = g_array;
			break;
		case GL_ELEMENT_ARRAY_BUFFER:
			buffer = g_elements;
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return NULL;
	}

	if (buffer == NULL && !zero) {
		tgl_error_set(GL_INVALID_OPERATION);
		return NULL;
	}
	return buffer;
}

GL_APICALL void GL_APIENTRY glGenBuffers(GLsizei size, GLuint* buffers) {
	tgl_heap_gen(&g_heap, size, buffers);
}

GL_APICALL void GL_APIENTRY glDeleteBuffers(GLsizei size,
		const GLuint* buffers) {
	tgl_heap_delete(&g_heap, size, buffers);
}

GL_APICALL GLboolean GL_APIENTRY glIsBuffer(GLuint buffer) {
	return tgl_heap_is(&g_heap, buffer);
}

GL_APICALL void GL_APIENTRY glBindBuffer(GLenum target, GLuint name) {
	tgl_buffer_t* buffer = tgl_heap_get(&g_heap, name);
	switch (target) {
		case GL_ARRAY_BUFFER:
			g_array = buffer;
			break;
		case GL_ELEMENT_ARRAY_BUFFER:
			g_array = buffer;
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}
}

GL_APICALL void GL_APIENTRY glGetBufferParameteriv(GLenum target, GLenum name,
		GLint* values) {
	tgl_buffer_t* buffer = tgl_buffer_get(target, GL_FALSE);
	if (buffer == NULL) {
		return;
	}
	if (values == NULL) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}

	switch (name) {
		case GL_BUFFER_SIZE:
			values[0] = tgl_mem_size(buffer->data);
			break;
		case GL_BUFFER_USAGE:
			values[0] = buffer->usage;
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}
}

GL_APICALL void GL_APIENTRY glBufferData(GLenum target, GLsizeiptr size,
		const GLvoid* data, GLenum usage) {
	tgl_buffer_t* buffer = tgl_buffer_get(target, GL_FALSE);
	if (buffer == NULL) {
		return;
	}
	if (size < 0) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}
	switch (usage) {
		case GL_STATIC_DRAW:
		case GL_STREAM_DRAW:
		case GL_DYNAMIC_DRAW:
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}

	buffer->usage = usage;
	buffer->data = tgl_mem_resize(buffer->data, size);
	if (buffer->data == NULL) {
		return;
	}
	if (data != NULL) {
		memcpy(buffer->data, data, size);
	}
}

GL_APICALL void GL_APIENTRY glBufferSubData(GLenum target, GLintptr offset,
		GLsizeiptr size, const GLvoid* data) {
	tgl_buffer_t* buffer = tgl_buffer_get(target, GL_FALSE);
	if (buffer == NULL) {
		return;
	}
	if (offset < 0 || size < 0 || offset + size > tgl_mem_size(buffer->data)) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}
	
	if (data != NULL) {
		memcpy(buffer->data + offset, data, size);
	}
}