#include <stdio.h>
#include <stdint.h>

static void welcome() {
	printf("Welcome to riscv32e-NPC!\n");
}

// common.h : vaddr_t & paddr_t => int32_t
typedef uint32_t word_t;
typedef int32_t  sword_t;
typedef word_t   vaddr_t;  
typedef uint32_t paddr_t;

#define MBASE  0x80000000
#define MSIZE  0x8000000
#define	MLEFT  (paddr_t)MBASE
#define	MRIGHT (paddr_t)MBASE + MSIZE - 1;

// CPU_state
/*
typedef struct {
	word_t gpr[32];
	vaddr_t pc;
} CPU_state;
*/

CPU_state cpu = {};

// Decode
typedef struct {
	union {
		uint32_t val;
	} inst;
} ISADecodeInfo;

typedef struct Decode {
	vaddr_t pc;
	vaddr_t snpc;
	vaddr_t dnpc;
	ISADecodeInfo isa;
} Decode;

// configuration

static uint8_t *pmem = NULL;

static inline word_t host_read(void *addr, int len) {
	return *(uint32_t *)addr;
}
uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - MBASE; }

void init_mem() {
	pmem = malloc(MSIZE);
}

static word_t pmem_read(paddr_t addr, int len) {
	word_t ret = host_read(guest_to_host(addr), len);
	return ret;
}

word_t paddr_read(paddr_t addr, int len) {
	return pmem_read(addr, len);
}
static word_t vaddr_iftech(vaddr_t addr, int len) {
	return paddr_read(addr, len);
}

static inline uint32_t inst_fetch(vaddr_t *pc, int len) {
	uint32_t inst = vaddr_ifetch(*pc, len);
	(*pc) += len;
	return inst;
}



#include <getopt.h>
// Loading img
static char *log_file = NULL;
static char *img_file = NULL;

static long load_img() {
	if (img_file == NULL) {
		printf("No image is given. Use the default build-in image");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");
	Assert(fp, "Can not open '%s'", img_file);

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(guest_to_host(MLEFT), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"log"   , required_argument, NULL, 'l'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "l:", table, NULL)) != -1) {
		switch (o) {
			case 'l': log_file = optarg; break;
			case  1 : img_file = optarg; return 0; // non-option argument
			default:
 				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        		printf("\t-l,--log=FILE           output log to FILE\n");
        		printf("\n");
        		exit(0);
		}
	}
	return 0;
}

void init_monitor(int argc, char *argv[]) {
	parse_args(argc, argv);
	// init_log(log_file);
	init_mem();
	long img_size = load_img();
}