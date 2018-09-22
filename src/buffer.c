#include "buffer.h"
#include "heap.h"
#include "error.h"
#include <string.h>

static tgl_heap_t g_heap;
static GLuint g_array;
static GLuint g_elements;

static void buffer_create(GLuint name, void* obj) {
	(void)name;
	tgl_buffer_t* buffer = obj;
	tgl_array_create(&buffer->array, 1);
	buffer->usage = GL_STATIC_DRAW;
}

static void buffer_destroy(GLuint name, void* obj) {
	tgl_buffer_t* buffer = obj;
	tgl_array_destroy(&buffer->array);
	if (name == g_array) {
		g_array = 0;
	}
	if (name == g_elements) {
		g_elements = 0;
	}
}

static tgl_buffer_t* buffer_get(GLenum target) {
	GLuint buffer;
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

	if (buffer == 0) {
		tgl_error_set(GL_INVALID_OPERATION);
		return NULL;
	}
	return tgl_heap_get(&g_heap, buffer);
}

void tgl_buffer_init() {
	tgl_heap_create(&g_heap, sizeof(tgl_buffer_t),
		buffer_create, buffer_destroy);
	g_array = 0;
	g_elements = 0;
}

void tgl_buffer_exit() {
	tgl_heap_destroy(&g_heap);
}

void tgl_buffer_info(GLenum query, GLint* values) {
	switch (query) {
		case GL_ARRAY_BUFFER_BINDING:
			values[0] = g_array;
			break;
		case GL_ELEMENT_ARRAY_BUFFER:
			values[0] = g_elements;
			break;
	}
}

tgl_buffer_t* tgl_buffer_get(GLuint buffer) {
	return tgl_heap_get(&g_heap, buffer);
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
	if (buffer != 0 && tgl_heap_get(&g_heap, buffer) == NULL) {
		return;
	}

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
	tgl_buffer_t* buffer = buffer_get(target);
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
	tgl_buffer_t* buffer = buffer_get(target);
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
	tgl_buffer_t* buffer = buffer_get(target);
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