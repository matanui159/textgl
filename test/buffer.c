#include "test.h"
#include <GLES2/gl2.h>

static GLuint g_buffers[3];

static void test_glGenBuffers() {
	TEST_FUNC(glGenBuffers);

	glGenBuffers(-1, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	glGenBuffers(2, g_buffers);
	TEST_CHECK(g_buffers[0] != g_buffers[1]);
	glGenBuffers(1, g_buffers + 2);
	TEST_CHECK(g_buffers[2] != g_buffers[0]);
	TEST_CHECK(g_buffers[2] != g_buffers[1]);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glDeleteBuffers() {
	TEST_FUNC(glDeleteBuffers);

	glDeleteBuffers(-1, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	glDeleteBuffers(3, g_buffers);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	g_buffers[1] = 10;
	g_buffers[2] = 0;
	glDeleteBuffers(3, g_buffers);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glGenBuffers(1, g_buffers + 1);
	TEST_CHECK(g_buffers[0] == g_buffers[1]);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glIsBuffer() {
	TEST_FUNC(glIsBuffer);

	TEST_CHECK(glIsBuffer(10) == GL_FALSE);
	TEST_CHECK(glIsBuffer(1) == GL_FALSE);
	TEST_CHECK(glIsBuffer(0) == GL_FALSE);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glGenBuffers(1, g_buffers);
	TEST_CHECK(glIsBuffer(g_buffers[0]) == GL_FALSE);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBindBuffer(GL_ARRAY_BUFFER, g_buffers[0]);
	TEST_CHECK(glIsBuffer(g_buffers[0]) == GL_TRUE);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glDeleteBuffers(1, g_buffers);
	TEST_CHECK(glIsBuffer(g_buffers[0]) == GL_FALSE);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glBindBuffer() {
	TEST_FUNC(glBindBuffer);

	glBindBuffer(GL_VERSION, 0);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	glGenBuffers(2, g_buffers);
	glBindBuffer(GL_ARRAY_BUFFER, g_buffers[0]);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, g_buffers[1]);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 10);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glDeleteBuffers(2, g_buffers);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glGetBufferParameteriv() {
	TEST_FUNC(glGetBufferParameteriv);

	glGetBufferParameteriv(GL_VERSION, GL_BUFFER_SIZE, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_OPERATION);

	glGetBufferParameteriv(GL_ELEMENT_ARRAY_BUFFER, GL_VERSION, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	GLint value;
	glGetBufferParameteriv(GL_ELEMENT_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 0);
	glGetBufferParameteriv(GL_ELEMENT_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_STATIC_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBufferData(GL_ELEMENT_ARRAY_BUFFER, 5, NULL, GL_STREAM_DRAW);
	glGetBufferParameteriv(GL_ELEMENT_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 5);
	glGetBufferParameteriv(GL_ELEMENT_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_STREAM_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBindBuffer(GL_ARRAY_BUFFER, 10);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 5);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_STREAM_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glBufferData() {
	TEST_FUNC(glBufferData);

	glBufferData(GL_VERSION, 5, NULL, GL_STREAM_DRAW);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	glBufferData(GL_ELEMENT_ARRAY_BUFFER, 5, NULL, GL_STREAM_DRAW);
	TEST_CHECK(glGetError() == GL_INVALID_OPERATION);

	glBufferData(GL_ARRAY_BUFFER, -1, NULL, GL_STREAM_DRAW);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	glBufferData(GL_ARRAY_BUFFER, 5, NULL, GL_VERSION);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	GLint value;
	glBufferData(GL_ARRAY_BUFFER, 10, NULL, GL_DYNAMIC_DRAW);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 10);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_DYNAMIC_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBufferData(GL_ARRAY_BUFFER, 3, NULL, GL_STATIC_DRAW);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 3);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_STATIC_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

static void test_glBufferSubData() {
	TEST_FUNC(glBufferData);

	glBufferSubData(GL_VERSION, 0, 3, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	glBufferSubData(GL_ELEMENT_ARRAY_BUFFER, 0, 3, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_OPERATION);

	glBufferSubData(GL_ARRAY_BUFFER, -1, 3, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	glBufferSubData(GL_ARRAY_BUFFER, 0, -1, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	glBufferSubData(GL_ARRAY_BUFFER, 1, 3, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);

	GLint value;
	glBufferSubData(GL_ARRAY_BUFFER, 0, 3, NULL);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_CHECK(value == 3);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, &value);
	TEST_CHECK(value == GL_STATIC_DRAW);
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glBufferSubData(GL_ARRAY_BUFFER, 1, 2, NULL);
	g_buffers[0] = 10;
	glDeleteBuffers(1, g_buffers);	
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

void test_group_buffer() {
	TEST_GROUP(buffer);
	test_glGenBuffers();
	test_glDeleteBuffers();
	test_glIsBuffer();
	test_glBindBuffer();
	test_glGetBufferParameteriv();
	test_glBufferData();
	test_glBufferSubData();
}