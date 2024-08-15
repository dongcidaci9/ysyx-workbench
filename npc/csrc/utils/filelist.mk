SIM_SRC += csrc/utils/disasm.cc
COMPILE += -CFLAGS "$(shell llvm-config --cxxflags)"
LIBS += -LDFLAGS "$(shell llvm-config --ldflags)"
LIBS += -LDFLAGS "$(shell llvm-config --libs)"
