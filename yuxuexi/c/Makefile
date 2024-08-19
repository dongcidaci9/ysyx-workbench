CC=gcc
CFLAGS=-Wall -g -DNDEBUG
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=)

all:$(OBJS) 
#$(OBJS) means change ".c" files to " " files and how? it will find a pattern to do it.

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS)

.PHONY:
	clean
