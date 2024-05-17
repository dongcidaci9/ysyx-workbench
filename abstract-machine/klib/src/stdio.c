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

static void reverse(char *s, int len) {
	char *end = s + len - 1;
	char tmp;
	while (s < end) {
		tmp = *s;
		*s ++ = *end;
		*end ++ = tmp;
	}
}

static int itoa(int n, char *s, int base) {

	int i = 0, digit = 0;
	do {
		digit = n % base;
		if (digit >= 10) s[i++] = 'a' + digit - 10;
		else s[i++] = '0' + digit;
	} while ((n /= base) > 0);
	s[i] = '\0';

	reverse(s - i, i);
	return i;
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
					out += itoa(num, out, 10);
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
