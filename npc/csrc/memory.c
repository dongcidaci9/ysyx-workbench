#include <common.h>
#include <utils.h>
#include <macro.h>
#include <debug.h>
#include <memory.h>
#include <cpu.h>

extern CPU_state cpu;

static uint8_t *mem = NULL;

uint8_t* guest_to_host(paddr_t paddr) { return mem + paddr - CONFIG_MBASE; }

// default build-in image
static const uint32_t img [] = {
	0x00000297,
	0x00028823,
	0x0102c503,
	0x00100073,
	0xdeadbeef,
};

void init_isa() {
	memcpy(guest_to_host(CONFIG_MBASE), img, sizeof(img));
}

// initialize memory
void init_mem() {
	mem = (uint8_t*)malloc(CONFIG_MSIZE);
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t host_read(void* addr) {
	return *(paddr_t *)addr;
}

word_t mem_read(paddr_t addr) {
    paddr_t aligned_addr = addr & ~0x3u;
	word_t ret = host_read(guest_to_host(aligned_addr));

	return ret;
}

static void out_of_bound(paddr_t addr) { 
    panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

extern "C" int pmem_read(paddr_t raddr, char rmask) {
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
    // paddr_t aligned_raddr = raddr & ~0x3u;
    
    word_t rdata = host_read(guest_to_host(raddr));
    // if (raddr == 时钟地址) { 返回当前时间 }
    
    char rmask1 = rmask & 0x0F;
    char rmask2 = (rmask & 0x10) >> 4;

    char len = 0;
    word_t ret;
    char* ret_ptr = (char *)&ret;
    for (int i = 0; i < 4; i ++) {
        if (rmask1 & (1 << i)) {
            ret_ptr[i] = (rdata >> (i * 8)) & 0xFF;
            len ++;
        } else {
            ret_ptr[i] = 0;
        }
    }

    if (rmask2 == 0) {
        if (len == 1) ret = (uint32_t)(uint8_t)ret;
        if (len == 2) ret = (uint32_t)(uint16_t)ret;
        if (len == 4) ret = (uint32_t)ret;
    } else if (rmask2 == 1) {
        if (len == 1) ret = (int32_t)(int8_t)ret;
        if (len == 2) ret = (int32_t)(int16_t)ret;
        if (len == 4) ret = (int32_t)ret;
    }

    IFDEF(CONFIG_MTRACE, display_mread(raddr, len, ret));

    if (!in_pmem(raddr)) out_of_bound(raddr);
    return ret;
}

extern "C" void pmem_write(paddr_t waddr, word_t wdata, char wmask) {
    // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    // paddr_t aligned_waddr = waddr & ~0x3u; 
    
    // if (waddr == 串口地址) { putchar(...) }
    
    char len = 0;
    for (int i = 0; i < 4; i ++) {
        if (wmask & (1 << i)) {
            memset(guest_to_host(waddr) + i, (wdata >> (i * 8)) & 0xFF, 1);
            len ++; 
        }
    }
    IFDEF(CONFIG_MTRACE, display_mwrite(waddr, len, wdata));
    
    if (!in_pmem(waddr)) out_of_bound(waddr);
}

