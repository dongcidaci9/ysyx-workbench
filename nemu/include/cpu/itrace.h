#ifndef __CPU_ITRACE_H__
#define __CPU_ITRACE_H__

#include <common.h>

void trace_inst(word_t pc, uint32_t inst);
void display_inst();

#endif
