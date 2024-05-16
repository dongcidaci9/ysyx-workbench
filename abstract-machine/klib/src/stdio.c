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
	char *start = s;	
	char *end = s + len - 1;
	char tmp;
	while (start < end) {
		tmp = *start;
		*start = *end;
		*end = tmp;
	}
}

static int itoa(int n, char *s) {
	char *ptr = s;

	int i = 0;
	do {
		int bit = n % 10;
		ptr[i ++] = bit;
	} while ((n /= 10) > 0);

	ptr[i] = '\0';
	reverse(ptr, i);

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
					out += itoa(va_arg(pArgs, int), out);
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
