#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
	char *ptr = dst;

	while (*src != '\0') {
		*ptr ++ = *src ++;
	}

	*ptr = '\0';
	
	return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
	char *dst_ptr = dst;
	while(*dst_ptr != '\0') {
		dst_ptr ++;
	}

	while (*src != '\0') {
		*dst_ptr ++ = *src ++;
	}
	
	*dst_ptr = '\0';

	return dst;
}

int strcmp(const char *s1, const char *s2) {
	while (*s1 == *s2 && *s1 != '\0') {
		s1 ++;
		s2 ++;
	}
	return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
	char *ptr = (char *)s;
	int val = c;

	for (size_t i = 0; i < n; i ++) {
		*ptr ++ = val; // *(ptr + i) = val // ptr[i] = val; 
	}

	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
	const char *ptr1 = (const char*)s1;
	const char *ptr2 = (const char*)s2;
	while(n --) {
		if (*ptr1 != *ptr2) {
			return *ptr1 - *ptr2;
		}
		ptr1 ++;
		ptr2 ++;
	}
	return 0;
}

#endif
