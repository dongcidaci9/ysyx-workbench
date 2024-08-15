SIM_SRC += csrc/utils/disasm.cc
#COMPILE += -CFLAGS "$(shell llvm-config --cxxflags)"
#COMPILE += -CFLAGS "-fvisibility=hidden"
LIBS += -LDFLAGS "$(shell llvm-config --libs)"
