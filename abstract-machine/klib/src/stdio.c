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

static void itoa(int n, char *s, int base) {
	int sign = n, bit = 0;
	if (sign < 0) n = -n;
	do {
		bit = n % base;
		if (bit >= 10) *s ++ = 'a' + bit - 10;
		else *s ++ = '0' + bit;
	} while ((n /= base) > 0);
	if (sign < 0) *s ++ = '-';
	*s = '\0';

}

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
					int num = va_arg(ap, int);
					itoa(num, out, 10);
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
