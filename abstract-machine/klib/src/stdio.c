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

static void itoa(unsigned int n, char *buf) {
	int i = 0;
	if (n < 10) {
		buf[0] = '0' + n;
		buf[1] = '\0';
		return;
	}

	itoa(n / 10, buf);

	for(i = 0; buf[i] != '\0'; i++);
	buf[i] = (n % 10) + '0';
	buf[i + 1] = '\0';
}
/*
	while (divisor > 0) {
		int digit = num / divisor;
		if (digit != 0 || divisor == 1 ) ptr[i ++] = '0' + digit;
		num %= divisor;
		divisor /= 10;
	}
}
*/

int sprintf(char *out, const char *fmt, ...) {	
	char *start = out; // record number of written character

	va_list ap; // pointor towards variable parameter list
	va_start(ap, fmt); // initialize it towards fmt, no matter what variable parameter type it is

	while (*fmt != '\0') {
		if (*fmt != '%') {
			*out ++ = *fmt ++;
		} else {
			++ fmt;
			switch (*fmt) {
				case 'd':
					unsigned int num = va_arg(ap, unsigned int);
					itoa(num, out);
					break;
				case 's': 
					char *s = va_arg(ap, char *);
					strcpy(out, s);
					out += strlen(out);
					break;
			}
		}
		++ fmt;
	}

	*out = '\0';
	va_end(ap); // finisth visit va_list

	return out - start; 
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
