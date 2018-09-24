#include "test.h"
#include <time.h>

#define STRESS_AMOUNT 512

#define STRESS_BEGIN(name, iters) do {\
	const char _sname[] = #name; \
	clock_t _sclock = clock(); \
	for (GLint _si = 0; _si < iters; ++_si)

#define STRESS_END \
	printf(" * %s: %lims\n", _sname, clock() - _sclock); \
	TEST_ERROR(GL_NO_ERROR); \
} while (0);

TEST_BEGIN(stress_array) {
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);

	GLsizeiptr size = STRESS_AMOUNT;
	STRESS_BEGIN(glBufferData, STRESS_AMOUNT * STRESS_AMOUNT) {
		glBufferData(GL_ARRAY_BUFFER, size, NULL, GL_STREAM_DRAW);
		size += STRESS_AMOUNT;
	} STRESS_END
} TEST_END

TEST_BEGIN(stress_heap) {
	GLuint buffers[STRESS_AMOUNT];
	STRESS_BEGIN(glGenBuffers, STRESS_AMOUNT) {
		glGenBuffers(STRESS_AMOUNT, buffers);
	} STRESS_END

	STRESS_BEGIN(glBindBuffer, STRESS_AMOUNT) {
		for (GLint i = 0; i < STRESS_AMOUNT; ++i) {
			glBindBuffer(GL_ARRAY_BUFFER, buffers[i]);
		}
	} STRESS_END

	GLuint name = buffers[STRESS_AMOUNT - 1];
	STRESS_BEGIN(glBindBuffer_new, STRESS_AMOUNT * STRESS_AMOUNT) {
		glBindBuffer(GL_ARRAY_BUFFER, ++name);
	} STRESS_END
} TEST_END