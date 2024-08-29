// getopt
#include <getopt.h>

// include
#include <debug.h>
#include <cpu.h>
#include <macro.h>
#include <sdb.h>
#include <memory.h>

void init_isa();
void init_mem();
void init_disasm(const char *triple);
void init_elf(const char *elf_file);
void init_difftest(char *ref_so_file, long img_size, int port);

//////////////////////////////////////////////
/*                	Monitor           		*/	
//////////////////////////////////////////////

void welcome() {
  Log("Tracer: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Instruction Tracer: %s", MUXDEF(CONFIG_ITRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Function Tracer: %s", MUXDEF(CONFIG_FTRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

static char *log_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;

// command line
static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"batch" , no_argument		, NULL, 'b'},
		{"log"   , required_argument, NULL, 'l'},
		{"elf"   , required_argument, NULL, 'e'},
		{"diff"  , required_argument, NULL, 'd'},
		{"port"  , required_argument, NULL, 'p'},
    	{"help"  , no_argument      , NULL, 'h'},
		{0       , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-bhl:e:d:p:", table, NULL)) != -1) {
		switch (o) {
			case 'b': sdb_set_batch_mode(); break;
			case 'l': log_file = optarg; break;
			case 'e': elf_file = optarg; break;
			case 'd': diff_so_file = optarg; break;
			case 'p': sscanf(optarg, "%d", &difftest_port); break;
			case  1 : img_file = optarg; return 0; // non-option argument
			default:
 				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        		printf("\t-b,--batch           		run with batch mode\n");
        		printf("\t-l,--log=FILE           	output log to FILE\n");
        		printf("\t-e,--elf=FILE           	elf file to be parsed\n");
        		printf("\t-d,--diff=REF_SO          run DiffTest with reference REF_SO\n");
        		printf("\t-p,--port=PORT          	run DiffTest with port PORT\n");
        		printf("\n");
        		exit(0);
		}
	}
	return 0;
}

static long load_img() {
	if (img_file == NULL) {
		Log("No image is given. Use the default build-in image.");
		return 4096;
	}

	FILE *fp = fopen(img_file, "rb");

	fseek(fp, 0, SEEK_END); // *fp seek to the end of this file
	long size = ftell(fp);

	Log("The image is %s, size = %ld", img_file, size);

	fseek(fp, 0, SEEK_SET); // *fp seek to the start of this file
	int ret = fread(guest_to_host(MLEFT), size, 1, fp); // *fp read the data and save it to host
	assert(ret == 1);

	fclose(fp);
	return size;
}

void init_monitor(int argc, char *argv[]) {
	parse_args(argc, argv);
	// init_log(log_file);
	init_mem();
	init_isa();
	long img_size = load_img();
	IFDEF(CONFIG_ITRACE, init_disasm("riscv32" "-pc-linux-gnu"));
	IFDEF(CONFIG_FTRACE, init_elf(elf_file));
	IFDEF(CONFIG_DIFFTEST, init_difftest(diff_so_file, img_size, difftest_port));
	welcome();
}

