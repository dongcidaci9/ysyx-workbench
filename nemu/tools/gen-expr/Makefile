#***************************************************************************************
# Copyright (c) 2014-2022 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

SRCS = gen-expr.c
OBJS = $(patsubst %.c,build/%.o,$(SRCS))

TARGET = gen-expr

all: build/$(TARGET)

# Rule to compile
build/%.o: %.c | build
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link
build/$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

build:
	mkdir -p $@

run:all
	./build/gen-expr 10000 > input

clean:
	rm -rf build input

.PHONY:
	all clean


