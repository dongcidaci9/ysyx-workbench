#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

static int itoa(int num, char *s) {
	int divisor = 100;
	
	char *ptr = s;
	int i = 0;
	while (divisor > 0) {
		int digit = num / divisor;
		if (digit != 0 || divisor == 1 ) ptr[i ++] = '0' + digit;
		num %= divisor;
		divisor /= 10;
	}

	return i;
}

int sprintf(char *out, const char *fmt, ...) {	
	char *start = out; // record number of written character

	va_list pArgs; // pointor towards variable parameter list
	va_start(pArgs, fmt); // initialize it towards fmt, no matter what variable parameter type it is

	while (*fmt != '\0') {
		if (*fmt != '%') {
			*out ++ = *fmt ++;
		} else {
			++ fmt;
			switch (*fmt) {
				case 'd':
					int num = va_arg(pArgs, int);
					itoa(num, out);
					break;
				case 's': 
					char *s = va_arg(pArgs, char *);
					strcpy(out, s);
					out += strlen(out);
					break;
			}
		}
		++ fmt;
	}

	*out = '\0';
	va_end(pArgs); // finisth visit va_list

	return out - start; 
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
