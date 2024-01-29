/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
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

#include <isa.h>
#include <utils.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

word_t eval(int p, int q, bool *success); 
enum {
  TK_NOTYPE = 256,
	TK_NUM, TK_REG,
	TK_EQ, TK_NEQ,
	TK_NEG, TK_POS,
	TK_OR, TK_AND, 

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

	{" +", TK_NOTYPE},										
	{"(0x)?[0-9,a-f]+", TK_NUM},
	{"($)?(a-zA-z)?[0-9]*", TK_REG},
	{"\\+", '+'},	{"\\-", '-'},	{"\\*", '*'},	{"\\/", '/'},													
	{"\\(", '('},	{"\\)", ')'},

	{"==", TK_EQ}, {"!=", TK_NEQ},											
	{"\\|\\|", TK_OR},	{"&&", TK_AND}			

};

#define NR_REGEX ARRLEN(rules)

#define CHECK_TYPES(type, types) check_types(type, types, ARRLEN(types))

static int bibound_types[] = {')', TK_NUM};

static bool check_types(int type, int types[], int size) {
	for (int i = 0; i < size ; i++) {
		if (type == types[i]) return true;
	}
	return false;
}

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, sizeof(error_msg));
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}


typedef struct token {
  int type;
  char str[128];
} Token; // token buffer

static Token tokens[2048] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0; // means that could be not used.

// Write down the tokens and define its type:
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
				if (rules[i].token_type == TK_NOTYPE) break;

				tokens[nr_token].type = rules[i].token_type;

				switch (rules[i].token_type) {
					case TK_NUM: case TK_REG:
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						tokens[nr_token].str[substr_len] = '\0';
						break;
					case '-': case '+':
						if (nr_token == 0 || !CHECK_TYPES(tokens[nr_token - 1].type, bibound_types)) {
							switch (rules[i].token_type) {
								case '-': tokens[nr_token].type = TK_NEG; break;
								case '+': tokens[nr_token].type = TK_POS; break;
							}
						}
				}
				nr_token ++;
				break;
			}
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q) {
	int par = 0, i = 0;
	if (tokens[p].type == '(' && tokens[q].type == ')') {
		for (i = p + 1; i <= q - 1; i ++) {
			if (tokens[i].type == '(') par ++;
			if (tokens[i].type == ')') par --;
			if (par < 0) return false;
		}	
	if (par == 0) return true; 
	}
	return false;
}

int find_op(int p, int q) {
	int ret = -1, par = 0, op = 0;
	for (int i = p; i <= q; i ++) {
		if (tokens[i].type == TK_NUM) {
			continue;	
		} else if (tokens[i].type == '(') {
			par ++;
		} else if (tokens[i].type == ')') {
			par --;
		} else if (par > 0) {
			continue;
		} else {
			int tmp = 0;
			switch (tokens[i].type) {
				case TK_NEG : case TK_POS: tmp = 1; break;
				case '*': case '/': tmp = 2; break;
				case '+': case '-': tmp = 3; break;
				case TK_EQ: case TK_NEQ: tmp = 4; break;
			}
			if (tmp >= op) {
				op = tmp;
				ret = i;
			}
		}
	}
	printf("op: %d\n", ret);
	if (par != 0) return -1;
	return ret;
}

static word_t operand(int i, bool *success) {
	char *endptr;
	switch (tokens[i].type) {
		case TK_NUM:
			return strtol(tokens[i].str, &endptr, 10); break;
		case TK_REG:
			return isa_reg_str2val(tokens[i].str, success); break;
		default:
			*success = false;
			return 0;
	}
	if (*endptr != '\0') {
		*success = false;	
		return 0;
	}
}

static word_t calc1(word_t val1, int operator, word_t val2, bool *success) {
	switch(operator) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/': if (val2 == 0) {
									*success = false;
									return 0;
								} else {
									return (sword_t)val1 / (sword_t)val2;
								}
			default: assert(0);
	}
	return 0;
}

static word_t calc2(int operator, word_t val, bool *success) {
    switch (operator) {
			case TK_NEG: return -val; 
			case TK_POS: return val;
			default: assert(0);
		}
		return 0;
}

word_t eval(int p, int q, bool *success) {
	*success = true;
	if (p > q) {
    /* Bad expression */
		/* Handle over like -1*/
		*success = false;
		return 0;
  } else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
		word_t ret = operand(p, success);
		return ret;
	} else if (check_parentheses(p, q) == true) {
     /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1, success); 
	} else {
    int op = find_op(p, q);
		if (op < 0) {
			*success = false;
			return 0;
		}

		bool success1, success2;
    word_t val1 = eval(p, op - 1, &success1);
    word_t val2 = eval(op + 1, q, &success2);

		if (!success2) {
			*success = false;
			return 0;
		}

		if (success1 == true) {
			word_t ret = calc1(val1, tokens[op].type, val2, success);
			return ret;
		} else {
			word_t ret = calc2(tokens[op].type, val2, success);
			return ret;
		}
	}
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
	return eval(0, nr_token - 1, success);
}

void expr_test () {
	FILE *fp = fopen("/home/liangzhongqi/Desktop/ysyx-workbench/nemu/tools/gen-expr/input", "r"); // read mode
  if (fp == NULL) perror("test_expr error");

  char *e = NULL;
  word_t correct_res;
  size_t len = 0;
  ssize_t read;
  bool success = false;

  while (true) {
    if (fscanf(fp, "%d ", &correct_res) == -1) break;
    read = getline(&e, &len, fp);
    if (e[read-1] == '\n') e[read-1] = '\0';
    
    word_t result = expr(e, &success);
    assert(success);

    if (result == correct_res) {
      puts(e); 
      printf("PASS: Test result is correct. \033[1;32mResult: %d\n", result);
    } else {
			puts(e);
			printf("expected: %d, while got: %d\n", correct_res, result);
			assert(0);
		}
  }

  fclose(fp);
  if (e) free(e);

  Log("Expression test pass");
}

