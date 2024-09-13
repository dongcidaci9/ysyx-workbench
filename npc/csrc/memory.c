#include <common.h>
#include <utils.h>
#include <memory.h>

static uint8_t *mem = NULL;

uint8_t* guest_to_host(addr_t paddr) { return mem + paddr - MBASE; }

// default build-in image
static const uint32_t img [] = {
	0x00000297,
	0x00028823,
	0x0102c503,
	0x00100073,
	0xdeadbeef,
};

void init_isa() {
	memcpy(guest_to_host(MBASE), img, sizeof(img));
}

// initialize memory
void init_mem() {
	mem = (uint8_t*)malloc(MSIZE);
}

word_t host_read(void* addr) {
	return *(addr_t *)addr;
}

word_t mem_read(addr_t addr) {
    addr_t aligned_addr = addr & ~0x3u;
	word_t ret = host_read(guest_to_host(aligned_addr));

	return ret;
}
/*
// addr_t* pc_addr = &pc; *pc_addr = pc; 
word_t inst_fetch(addr_t* pc_addr) {
	uint32_t inst = mem_read(*pc_addr);
	return inst;
}
*/
extern "C" word_t pmem_read(addr_t raddr, char rmask) {
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
    // addr_t aligned_raddr = raddr & ~0x3u;
    word_t rdata = host_read(guest_to_host(raddr));

    char rmask1 = rmask & 0x0F;
    char rmask2 = rmask & 0x10;

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
    if (len == 1) ret = (int8_t)ret;
    else if (len == 2) ret = (int16_t)ret;
    else if (len == 4) ret = (int32_t)ret;
    else ret = ret;

    if (rmask2 == 0) ret = (int32_t)ret;
    else ret = (uint32_t)ret; 

    #ifdef CONFIG_MTRACE
    display_mread(raddr, len, ret);
    #endif

    return ret;
}

extern "C" void pmem_write(addr_t waddr, word_t wdata, char wmask) {
    // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
    // `wmask`中每比特表示`wdata`中1个字节的掩码,
    // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    // addr_t aligned_waddr = waddr & ~0x3u;
    char len = 0;
    for (int i = 0; i < 4; i ++) {
        if (wmask & (1 << i)) {
            memset(guest_to_host(waddr) + i, (wdata >> (i * 8)) & 0xFF, 1);
            len ++; 
        }
    }
    #ifdef CONFIG_MTRACE 
    display_mwrite(waddr, len, wdata);
    #endif
}