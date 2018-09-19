#include "test.h"
#include <GLES2/gl2.h>

static void test_glGetError() {
	TEST_FUNC(glGetError);
	
	TEST_CHECK(glGetError() == GL_NO_ERROR);

	glGenBuffers(-1, NULL);
	TEST_CHECK(glGetError() == GL_INVALID_VALUE);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

void test_group_error() {
	TEST_GROUP(error);
	test_glGetError();
}