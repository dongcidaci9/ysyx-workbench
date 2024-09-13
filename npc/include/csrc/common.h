#ifndef __COMMON_H__
#define __COMMON_H__

// glic
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <cstring>

#include <../generated/autoconf.h>

#define __GUEST_ISA__ riscv32e

// some defines
typedef uint32_t    word_t;
typedef uint32_t    paddr_t; 

#define FMT_WORD    "0x%08x"
#define FMT_PADDR   "0x%08x"

#endif