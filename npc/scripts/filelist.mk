ifeq ($(CONFIG_ITRACE), y)
SIM_SRC += csrc/utils/disasm.cc
#SIM_SRC += csrc/utils/itrace.c
LIBS += -LDFLAGS "$(shell llvm-config --libs)"
endif

ifeq ($(CONFIG_FTRACE), y)
SIM_SRC += csrc/utils/ftrace.c
endif

ifeq ($(CONFIG_DIFFTEST), y)
DIFF_REF_PATH = $(NEMU_HOME)/build
DIFF_REF_SO = $(DIFF_REF_PATH)/riscv32-nemu-interpreter-so
#MKFLAGS = GUEST_ISA=$(GUEST_ISA) SHARE=1 ENGINE=interpreter
ARGS_DIFF = --diff=$(DIFF_REF_SO)

LIBS += -LDFLAGS "-L $(DIFF_REF_PATH) -l$(DIFF_REF_SO)"
endif