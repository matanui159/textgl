build:
	echo RELEASE = $(RELEASE) > config.tup
	tup $(TUP_FLAGS)

clean:
	git clean -fdX

test: build
	bin/test

verbose:
	$(eval TUP_FLAGS += --verbose)

release:
	$(eval RELEASE = y)

.PHONY: build clean test verbose release
.SILENT: build clean test verbose release