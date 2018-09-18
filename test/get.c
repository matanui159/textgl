#include "test.h"
#include <GLES2/gl2.h>

static void test_glGetString() {
	TEST_FUNC(glGetString);

	TEST_CHECK(glGetString(GL_ARRAY_BUFFER) == NULL);
	TEST_CHECK(glGetError() == GL_INVALID_ENUM);

	TEST_CHECK(glGetString(GL_VENDOR) != NULL);
	TEST_CHECK(glGetString(GL_RENDERER) != NULL);
	TEST_CHECK(glGetString(GL_VERSION) != NULL);
	TEST_CHECK(glGetString(GL_SHADING_LANGUAGE_VERSION) != NULL);
	TEST_CHECK(glGetString(GL_EXTENSIONS) != NULL);
	TEST_CHECK(glGetError() == GL_NO_ERROR);
}

void test_group_get() {
	TEST_GROUP(get);
	test_glGetString();
}