#include "test.h"

#define BUFFER_PARAM(target, query, value) do { \
	GLint _tresult; \
	glGetBufferParameteriv(target, query, &_tresult); \
	TEST__CHECK( \
		_tresult == value, \
		#query " == " #value \
	); \
} while (0)

TEST_BEGIN(glGenBuffers) {
	GLuint buffers[3];
	glGenBuffers(-1, buffers);
	TEST_ERROR(GL_INVALID_VALUE);

	glGenBuffers(1, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	glGenBuffers(2, buffers);
	TEST_CHECK(buffers[0] != buffers[1]);
	glGenBuffers(1, buffers + 2);
	TEST_CHECK(buffers[0] != buffers[2]);
	TEST_CHECK(buffers[1] != buffers[2]);
	TEST_ERROR(GL_NO_ERROR);

	++buffers[2];
	glBindBuffer(GL_ARRAY_BUFFER, buffers[2]);
	glGenBuffers(1, buffers);
	TEST_CHECK(buffers[0] != buffers[2]);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glDeleteBuffers) {
	GLuint buffer;
	glDeleteBuffers(-1, &buffer);
	TEST_ERROR(GL_INVALID_VALUE);

	glDeleteBuffers(1, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	glGenBuffers(1, &buffer);
	glDeleteBuffers(1, &buffer);
	TEST_ERROR(GL_NO_ERROR);

	GLuint reuse;
	glGenBuffers(1, &reuse);
	TEST_CHECK(reuse == buffer);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glIsBuffer) {
	TEST_CHECK(glIsBuffer(0) == GL_FALSE);
	TEST_CHECK(glIsBuffer(1) == GL_FALSE);
	TEST_ERROR(GL_NO_ERROR);

	GLuint buffer;
	glGenBuffers(1, &buffer);
	TEST_CHECK(glIsBuffer(buffer) == GL_FALSE);
	TEST_ERROR(GL_NO_ERROR);

	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	TEST_CHECK(glIsBuffer(buffer) == GL_TRUE);
	TEST_ERROR(GL_NO_ERROR);

	glDeleteBuffers(1, &buffer);
	TEST_CHECK(glIsBuffer(buffer) == GL_FALSE);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glBindBuffer) {
	glBindBuffer(GL_INVALID_ENUM, 0);
	TEST_ERROR(GL_INVALID_ENUM);

	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	TEST_ERROR(GL_NO_ERROR);

	glBindBuffer(GL_ARRAY_BUFFER, 0);
	TEST_ERROR(GL_NO_ERROR);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 8);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glGetBufferParameteriv) {
	GLint value;
	glGetBufferParameteriv(GL_INVALID_ENUM, GL_BUFFER_SIZE, &value);
	TEST_ERROR(GL_INVALID_ENUM);

	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, &value);
	TEST_ERROR(GL_INVALID_OPERATION);

	glBindBuffer(GL_ARRAY_BUFFER, 1);
	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_INVALID_ENUM, &value);
	TEST_ERROR(GL_INVALID_ENUM);

	glGetBufferParameteriv(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, 0);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, GL_STATIC_DRAW);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glBufferData) {
	glBufferData(GL_INVALID_ENUM, 0, NULL, GL_STATIC_DRAW);
	TEST_ERROR(GL_INVALID_ENUM);

	glBufferData(GL_ARRAY_BUFFER, 0, NULL, GL_STATIC_DRAW);
	TEST_ERROR(GL_INVALID_OPERATION);

	glBindBuffer(GL_ARRAY_BUFFER, 1);
	glBufferData(GL_ARRAY_BUFFER, -1, NULL, GL_STATIC_DRAW);
	TEST_ERROR(GL_INVALID_VALUE);

	glBufferData(GL_ARRAY_BUFFER, 0, NULL, GL_INVALID_ENUM);
	TEST_ERROR(GL_INVALID_ENUM);

	glBufferData(GL_ARRAY_BUFFER, 8, NULL, GL_STATIC_DRAW);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, 8);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, GL_STATIC_DRAW);
	TEST_ERROR(GL_NO_ERROR);

	glBufferData(GL_ARRAY_BUFFER, 16, NULL, GL_STREAM_DRAW);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, 16);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, GL_STREAM_DRAW);
	TEST_ERROR(GL_NO_ERROR);

	glBufferData(GL_ARRAY_BUFFER, 4, NULL, GL_DYNAMIC_DRAW);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_SIZE, 4);
	BUFFER_PARAM(GL_ARRAY_BUFFER, GL_BUFFER_USAGE, GL_DYNAMIC_DRAW);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END

TEST_BEGIN(glBufferSubData) {
	glBufferSubData(GL_INVALID_ENUM, 0, 0, NULL);
	TEST_ERROR(GL_INVALID_ENUM);

	glBufferSubData(GL_ARRAY_BUFFER, 0, 0, NULL);
	TEST_ERROR(GL_INVALID_OPERATION);

	glBindBuffer(GL_ARRAY_BUFFER, 1);
	glBufferSubData(GL_ARRAY_BUFFER, -1, 0, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	glBufferSubData(GL_ARRAY_BUFFER, 0, -1, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	glBufferData(GL_ARRAY_BUFFER, 8, NULL, GL_STATIC_DRAW);
	glBufferSubData(GL_ARRAY_BUFFER, 4, 16, NULL);
	TEST_ERROR(GL_INVALID_VALUE);

	glBufferSubData(GL_ARRAY_BUFFER, 4, 4, NULL);
	TEST_ERROR(GL_NO_ERROR);
} TEST_END