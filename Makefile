debug:
	echo DEBUG = y > tup/make.tup
	tup $(TUP_FLAGS)

release:
	echo DEBUG = n > tup/make.tup
	tup $(TUP_FLAGS)

clean:
	git clean -fdX

verbose:
	$(eval TUP_FLAGS += --verbose)

.PHONY: debug release clean verbose
.SILENT: debug release clean verbose