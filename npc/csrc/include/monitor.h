#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "common.h"

word_t inst_fetch(addr_t* pc);

uint64_t get_time();

void init_monitor(int argc, char *argv[]);

#endif