#include "buffer.h"
#include "heap.h"
#include "error.h"
#include <string.h>

static tgl_heap_t g_heap;
static tgl_buffer_t* g_array;
static tgl_buffer_t* g_elements;

static void buffer_create(void* obj) {
	tgl_buffer_t* buffer = obj;
	tgl_array_create(&buffer->array, 1);
	buffer->usage = GL_STATIC_DRAW;
}

static void buffer_destroy(void* obj) {
	tgl_buffer_t* buffer = obj;
	tgl_array_destroy(&buffer->array);
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

tgl_buffer_t* tgl_buffer_get(GLenum target, _Bool zero) {
	switch (target) {
		case GL_ARRAY_BUFFER:
			if (g_array == NULL && !zero) {
				tgl_error_set(GL_INVALID_OPERATION);
			}
			return g_array;
		case GL_ELEMENT_ARRAY_BUFFER:
			if (g_elements == NULL && !zero) {
				tgl_error_set(GL_INVALID_OPERATION);
			}
			return g_elements;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return NULL;
	}
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

GL_APICALL void GL_APIENTRY glBindBuffer(GLenum target, GLuint buffer) {
	switch (target) {
		case GL_ARRAY_BUFFER:
			g_array = tgl_heap_get(&g_heap, buffer);
			break;
		case GL_ELEMENT_ARRAY_BUFFER:
			g_elements = tgl_heap_get(&g_heap, buffer);
			break;
		default:
			tgl_error_set(GL_INVALID_ENUM);
			return;
	}
}

GL_APICALL void GL_APIENTRY glGetBufferParameteriv(GLenum target, GLenum name,
		GLint* values) {
	tgl_buffer_t* buffer = tgl_buffer_get(target, 0);
	if (buffer == NULL) {
		return;
	}

	switch (name) {
		case GL_BUFFER_SIZE:
			values[0] = buffer->array.size;
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
	tgl_buffer_t* buffer = tgl_buffer_get(target, 0);
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
	tgl_array_resize(&buffer->array, size);
	if (data != NULL) {
		memcpy(buffer->array.data, data, size);
	}
}

GL_APICALL void GL_APIENTRY glBufferSubData(GLenum target, GLintptr offset,
		GLsizeiptr size, const GLvoid* data) {
	tgl_buffer_t* buffer = tgl_buffer_get(target, 0);
	if (buffer == NULL) {
		return;
	}
	if (offset < 0 || size < 0 || offset + size > buffer->array.size) {
		tgl_error_set(GL_INVALID_VALUE);
		return;
	}
	
	if (data != NULL) {
		memcpy(buffer->array.data + offset, data, size);
	}
}