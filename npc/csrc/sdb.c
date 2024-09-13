//////////////////////////////////////////////
/*            	Simple Debugger        		*/	
//////////////////////////////////////////////
#include <utils.h>
#include <macro.h>
#include <cpu.h>
#include <memory.h>
// bool
#include <stdbool.h>
// readline
#include <readline/readline.h>
#include <readline/history.h>

static bool is_batch_mode = false;
extern NPCState npc_state;

static char* rl_gets() {
	static char* line_read = NULL;

	if (line_read) {
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("(npc) ");

	if (line_read && *line_read) {
		add_history(line_read);
	}

	return line_read;
}

static int cmd_help	(char *args); 
static int cmd_c	(char *args); 
static int cmd_q	(char *args);
static int cmd_si	(char *args);
static int cmd_x 	(char *args);
static int cmd_info	(char *args);

static struct {
	const char *name;
	const char *description;
	int (*handler) (char *);
} cmd_table [] = {	
	{ "help", "Usage: help: display information about all supported commands", cmd_help },
	{ "c", "Usage: c: continue running the suspended program", cmd_c },
	{ "q", "Usage: q: Exit NEMU", cmd_q },
 	{ "si", "Usage: si [N]: program pauses execution after executing N instructions in a single step, when N is not given, the default is 1", cmd_si },
 	{ "x", "Usage: x N EXPR: as starting memory address, output N consecutive 4 bytes in hexadecimal form", cmd_x },
 	{ "info", "Usage: info SUBCMD: press \"r\" can print registers status/ Press \"w\" can print watchpoints status", cmd_info },
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char* args) {
  if (args == NULL) {
    /* no argument given */
    for (int i = 0; i < NR_CMD; i ++) {
      printf("\033[1;33mRule - %s:\033[0m\n%s\n", cmd_table[i].name, cmd_table[i].description);
    }
  } else {
    for (int i = 0; i < NR_CMD; i ++) {
      if (strcmp(args, cmd_table[i].name) == 0) {
        printf("Rule - %s:\n  %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
  }
  return 0;

}

static int cmd_c(char* args) {
	cpu_exec(-1);
	return 0;
}

static int cmd_q(char* args) {
	npc_state.state = NPC_QUIT;
	return -1;
}

static int cmd_si(char* args) {
	int step;

	if (args == NULL) step = 1;
	else sscanf(args, "%d", &step);

	cpu_exec(step);

	return 0;
}

static int cmd_x(char* args) {
	char *arg1 = strtok(NULL, " ");
	if (arg1 == NULL) {
		printf("Usage:\nx N EXPR\n");
		return 0;
	}
	char *arg2 = strtok(NULL, " ");
	if (arg2 == NULL) {
		printf("Usage:\nx N EXPR\n");
		return 0;
	}

	int n = strtol(arg1, NULL, 10);
	paddr_t expr = strtol(arg2, NULL, 16);

	int i, j;	
	for (i = 0; i < n;) {
    	printf(ANSI_FMT("0x%08x\n", ANSI_FG_YELLOW), expr);
    
    	for (j = 0; j < 4; i ++, j ++) {
      		printf("0x%08x ", mem_read(expr));
      		expr += 4;
    	}
    puts("");
  	}
	return 0;
}

static int cmd_info(char *args) {
	if (args == NULL) {
		printf("Usage: info r or info w\n");
	} else {
		if (strcmp(args, "r") == 0 ) {
			reg_display();
		} else {
			printf("Usage: info r or info w\n");
		}
	}
	return 0;
}

void sdb_set_batch_mode() {
	is_batch_mode = true;
}

void sdb_mainloop() {
	if (is_batch_mode) {
		cmd_c(NULL);
		return;
	}

	for (char *str; (str = rl_gets()) != NULL; ) {
		char *str_end = str + strlen(str);

		char *cmd = strtok(str, " ");
		if (cmd == NULL) { continue; }

		char *args = cmd + strlen(cmd) + 1;
		if (args >= str_end) {
			args = NULL;
		}

		int i;
		for (i = 0; i < NR_CMD; i ++) {
			if (strcmp(cmd, cmd_table[i].name) == 0) {
				if (cmd_table[i].handler(args) < 0 ) { return; }
				break;
			}
		}

		if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
	}
}
