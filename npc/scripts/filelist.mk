ifeq ($(CONFIG_ITRACE), y)
SIM_SRC += csrc/utils/disasm.cc
#SIM_SRC += csrc/utils/itrace.c
LIBS += -LDFLAGS "$(shell llvm-config --libs)"
endif

ifeq ($(CONFIG_FTRACE), y)
SIM_SRC += csrc/utils/ftrace.c
endif

ifeq ($(CONFIG_DIFFTEST), y)
DIFF_REF_PATH = $(NEMU_HOME)
DIFF_REF_SO = $(DIFF_REF_PATH)/build/riscv32-nemu-interpreter-so
MKFLAGS = run 
ARGS_DIFF = --diff=$(DIFF_REF_SO)

$(DIFF_REF_SO):
	$(MAKE) -s -C $(DIFF_REF_PATH) $(MKFLAGS)

endif