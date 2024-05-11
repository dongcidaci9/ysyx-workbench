#ifndef __CPU_ITRACE_H__
#define __CPU_ITRACE_H__

#include <common.h>

void trace_inst(word_t pc, uint32_t inst);
void display_inst();

void trace_func_call(paddr_t pc, paddr_t target, bool is_tail);
void trace_func_ret(paddr_t pc);

#endif
