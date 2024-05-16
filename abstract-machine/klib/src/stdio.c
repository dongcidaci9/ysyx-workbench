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

int sprintf(char *out, const char *fmt, ...) {	
	int written = 0; // record number of written character

	va_list pArgs; // pointor towards variable parameter list
	va_start(pArgs, fmt); // initialize it towards fmt, no matter what variable parameter type it is

	while (*fmt != '\0') {
		if (*fmt != '%') {
			*out ++ = *fmt ++;
			written ++;
		} else {
			fmt ++;
			switch (*fmt) {
				case 'd': 
					{
						int num = va_arg(pArgs, int);
            int divisor = 1000000000;
            int leading_zero = 1; 
						while (divisor > 0) {
							int digit = num / divisor;
							if (digit != 0 || !leading_zero || divisor == 1) {
								*out ++ = '0' + digit;
								written++;
								leading_zero = 0;
							}
							num %= divisor;
							divisor /= 10;
						}
					}
					break;
				case 's':
					{	
						char *s = va_arg(pArgs, char*);
						while (*s != '\0') {
							*out ++ = *s ++;
							written ++;
						}
					}
					break;
			}
		}
	}

	*out = '\0';

	va_end(pArgs); // finisth visit va_list

	return written;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
