#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <common.h>
#include <utils.h>
#include <cassert>

#define _Log(...) \
    do { \
        printf(__VA_ARGS__); \
    } while (0)

#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      assert(cond); \
    } \
  } while (0)

#define ftrace_write(...) IFDEF(CONFIG_FTRACE, \
	do { \
		printf(__VA_ARGS__); \
	} while(0) \
)

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#define TODO() panic("please implement me")

#endif