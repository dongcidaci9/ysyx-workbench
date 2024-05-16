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
		*s = *end;
		*end = tmp;
	}
}

static int itoa(int n, char *s) {
	int i = 0;
	do {
		int bit = n % 10;
		s[i ++] = '0' + bit;
	} while ((n /= 10) > 0);

	s[i] = '\0';
	reverse(s, i);

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
			switch (*(++ fmt)) {
				case '%': *out = *fmt; ++out; break;
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
