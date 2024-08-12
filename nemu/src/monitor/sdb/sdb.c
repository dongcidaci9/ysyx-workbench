/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University *
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <memory/paddr.h>
#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void expr_test();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(sock) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
	nemu_state.state = NEMU_QUIT;
	return -1;
}

static int cmd_x(char *args);

static int cmd_info(char *args);

static int cmd_si(char *args);

static int cmd_p(char *args);

static int cmd_w(char *args);

static int cmd_d(char *args);

static int cmd_help(char *args);

// Order register table:
static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Usage: help: display information about all supported commands", cmd_help },
	{ "c", "Usage: c: continue running the suspended program", cmd_c },
	{ "q", "Usage: q: Exit NEMU", cmd_q },
  { "si", "Usage: si [N]: program pauses execution after executing N instructions in a single step, when N is not given, the default is 1", cmd_si },
  { "info", "Usage: info SUBCMD: press \"r\" can print registers status/ Press \"w\" can print watchpoints status", cmd_info },
  { "x", "Usage: x N EXPR: as starting memory address, output N consecutive 4 bytes in hexadecimal form", cmd_x },
  { "p", "Usage: p EXPR: find the value of the expression EXPR/ Press \"test\" can do the testing", cmd_p },
	{ "w", "Usage: w EXPR: When the value of the expression EXPR changes, program execution is suspended", cmd_w },
	{ "d", "Usage: d N: Delete the watch point with serial number N", cmd_d }

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_x(char *args) {
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
      		printf("0x%08x ", paddr_read(expr, 4));
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
		if (strcmp(args, "r") == 0) { 
			isa_reg_display(); 
		} else if (strcmp(args, "w") == 0) {
			wp_iterate();	
		} else { 
			printf("Usage: info r or info w\n"); 
		}
	}
	return 0;
}

static int cmd_si(char *args) {
	int step;
	
	if (args == NULL) step = 1;
	else sscanf(args, "%d", &step);
	
	cpu_exec(step);

	return 0;
}

static int cmd_p(char *args) {
	bool success = true;

	if (strcmp(args, "test") == 0) {
	/* Test mathmatic expression calculations. */
		expr_test();
		return 0;
	} 

	word_t res = expr(args, &success);
	if (!success) {
		printf("Invalid expression.\n");
	} else {
		printf("%d - 0x%10x\n", res, res);
	}
	return 0;
}

static int cmd_w(char *args) {
	if (!args) {
		printf("Usage: w EXPR\n");
		return 0;
	}
	bool success;
	word_t res = expr(args, &success);
	if (!success) {
		printf("Invalid expression");
	} else {
		wp_watch(args, res);
	}
	return 0;
}

static int cmd_d(char *args) {
	if (!args) {
		printf("Usage: d N\n");
		return 0;
	}
	int no = strtol(args, NULL, 10);
	wp_remove(no);
	return 0;
}

static int cmd_help(char *args) {
  if (args == NULL) {
    /* no argument given */
    for (int i = 0; i < NR_CMD; i ++) {
      printf("\033[1;33mRule - %s:\033[0m\n%s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (int i = 0; i < NR_CMD; i ++) {
      if (strcmp(args, cmd_table[i].name) == 0) {
        printf("Rule - %s:\n  %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", args);
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

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
