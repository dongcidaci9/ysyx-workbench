ifeq ($(CONFIG_ITRACE), y)
SIM_SRC += csrc/utils/disasm.cc
#SIM_SRC += csrc/utils/itrace.c
LIBS += -LDFLAGS "$(shell llvm-config --libs)"
endif

ifeq ($(CONFIG_FTRACE), y)
SIM_SRC += csrc/utils/ftrace.c
endif

ifeq ($(CONFIG_DIFFTEST), y)
LIBS += -LDFLAGS "-L $(NEMU_HOME)/build -lriscv32-nemu-interpreter-so"