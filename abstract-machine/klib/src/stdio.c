#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static void reverse(char *s, int len) {
	char *ptr = s;
	char *end = s + len - 1;
	char tmp;

	while (ptr < end) {
		tmp = *ptr;
		*ptr ++ = *end;
		*end -- = tmp;
	}
}

static int itoa(int n, char *s, int base) {
	int i = 0, digit = 0;

	do {
		digit = n % base;
		if (digit >= 10) s[i ++] = 'a' + digit - 10;
		else s[i ++] = '0' + digit;
	} while ((n /= base) > 0);

	s[i] = '\0';
	reverse(s, i);

	return i;
}

int vsprintf(char *out, const char *fmt, va_list ap) {	
	char *start = out; // record number of written character

	while (*fmt != '\0') {
		if (*fmt != '%') {
			*out ++ = *fmt ++;
		} else {
			++ fmt;
			switch (*fmt ++) {
				case 'd':
					int d = va_arg(ap, int);
					out += itoa(d, out, 10);
					break;
				case 's': 
					char *s = va_arg(ap, char *);
					strcpy(out, s);
					out += strlen(out);
					break;
				case 'c':
					char c = (char) va_arg(ap, int);
					*out ++ = c;
					break;
			}
		}
	}

	*out = '\0';

	return out - start; 
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
	va_list ap;

	va_start(ap, fmt);

	int ret = vsprintf(out, fmt, ap);

	va_end(ap);

	return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int printf(const char *fmt, ...) {
	char out[256];	
	va_list ap;

	va_start(ap, fmt);

	int ret = vsprintf(out, fmt, ap);
	for (char *ptr = out; *ptr; ptr ++) {
		putch(*ptr);
	}

	va_end(ap);

	return ret;
}

#endif
