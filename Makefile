ifeq ($(verbose),y)
	TUP_FLAGS += --verbose
endif

ifndef config
	config = debug
endif

all:
	echo CONFIG = $(config) | tee config.tup
	echo CC_FLAGS += $(cc) | tee -a config.tup
	echo LD_FLAGS += $(ld) | tee -a config.tup
	tup $(TUP_FLAGS)

clean:
	git clean -fdX

test: all
	bin/test

.SILENT: all clean test