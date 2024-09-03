#include <common.h>
#include <utils.h>

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

// addr_t* pc_addr = &pc; *pc_addr = pc; 
word_t inst_fetch(addr_t* pc_addr) {
	uint32_t inst = mem_read(*pc_addr);
	return inst;
}

extern "C" void print(addr_t mem_raddr) {

    printf("0x%08x\n", mem_raddr);
}

extern "C" word_t pmem_read(addr_t raddr) {
	// 总是读取地址为`raddr & ~0x3u`的4字节返回
    addr_t aligned_raddr = raddr & ~0x3u;
    word_t ret = host_read(guest_to_host(aligned_raddr)); 

    return ret;
}

extern "C" void pmem_write(addr_t waddr, word_t wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
    addr_t aligned_waddr = waddr & ~0x3u;

    for (int i = 0; i < 4; i ++) {
        if (wmask & (1 << i)) {
            memset(guest_to_host(aligned_waddr) + i, (wdata >> (i * 8)) & 0xFF, 1);
        }
    }
}