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

	
}

void test_group_buffer() {
	TEST_GROUP(buffer);
	test_glGenBuffers();
	test_glDeleteBuffers();
}