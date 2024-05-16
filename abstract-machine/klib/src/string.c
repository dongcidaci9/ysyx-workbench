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
	return (unsigned char*)s1 - (unsigned char*)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
	int *ptr = s;
	int val = c;

	for (int i = 0; i < n; ++ i) {
		ptr[i] = val; // *(ptr + i) = val
	}

	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
	void *ret = out;
	char *dest = (char *)out;
	const char *src = (const char *)in;
	for (int i = 0; i < n; ++i) {
		dest[i] = src[i];
	}
	return ret;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
