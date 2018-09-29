build:
	echo RELEASE = $(RELEASE) > tup/make.tup
	tup $(TUP_FLAGS)
	echo

clean:
	git clean -fdX

test: build
	util/test/test
	EGL/test/test

verbose:
	$(eval TUP_FLAGS += --verbose)

release:
	$(eval RELEASE = y)

.PHONY: build clean test verbose release
.SILENT: build clean test verbose release