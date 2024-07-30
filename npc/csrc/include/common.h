#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdint.h>
// some defines
typedef uint32_t word_t;
typedef uint32_t addr_t; 

#define __GUEST_ISA__ riscv32e
#define MBASE  0x80000000
#define MSIZE  0x8000000
#define	MLEFT  (addr_t)MBASE
#define	MRIGHT (addr_t)MBASE + MSIZE - 1;

#endif