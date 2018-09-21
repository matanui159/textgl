#include "test.h"

_Bool test_vint(int index, GLint* value, const char* format) {
	switch (format[0]) {
		case 'n':
			index -= 16;
			break;
		case 'p':
			index += 1;
			break;
	}

	GLint limit = 0;
	switch (format[0]) {
		case 'n':
			limit = -1;
			break;
		case 'p':
			limit = 16;
			break;
	}

	if (index > limit) {
		return 0;
	} else {
		*value = index;
		return 1;
	}
}

_Bool test_venum(int index, GLenum* value, int size, GLenum* list) {
	if (index >= size) {
		return 0;
	} else {
		*value = list[index];
		return 1;
	}
}