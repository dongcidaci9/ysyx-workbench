#ifndef __MEMORY_MTRACE_H__
#define __MEMORY_MTRACE_H__

#include <common.h>

void display_pread(paddr_t addr, int len, word_t data);
void display_pwrite(paddr_t addr, int len, word_t data);

#endif
