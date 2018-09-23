all:
	@tup

clean:
	@git clean -fdX

test: all
	@bin/test