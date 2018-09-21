#include "test.h"

TEST_BEGIN(glBindBuffer, GLBINDBUFFER) {
	{
		TEST_VENUM(target, GL_ARRAY_BUFFER, GL_ELEMENT_ARRAY_BUFFER) {
			TEST_VINT(name, pp) {
				glBindBuffer(target, name);
				TEST_CHECK(glGetError() != GL_NO_ERROR);
			}
		}
	}
} TEST_END