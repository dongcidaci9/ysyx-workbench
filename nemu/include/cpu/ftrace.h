#ifndef __CPU_FTRACE_H__
#define __CPU_FTRACE_H__

#include <common.h>

void trace_func_call(paddr_t pc, paddr_t target, bool is_tail);
void trace_func_ret(paddr_t pc);

#endif
