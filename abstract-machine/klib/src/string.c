#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s)
{
	size_t length = 0;
	while(*s)
	{
		length++;
		s++;
	}
	return length;
}

char *strcpy(char *dst, const char *src)
{
	char *ret = dst;
	while(*src)
		*dst++ = *src++;
	*dst = '\0';
	return ret;
}

// copied from Linux Programmer's Manual
char *strncpy(char *dst, const char *src, size_t n)
{
        size_t i;
        for (i = 0; i < n && src[i] != '\0'; i++)
                dst[i] = src[i];
        for ( ; i < n; i++)
                dst[i] = '\0';
	return dst;
}

char *strcat(char *dst, const char *src)
{
	char *ret = dst;
	while(*dst)
		dst++;
	while(*src)
		*dst++ = *src++;
	*dst = '\0';
	return ret;
}

int strcmp(const char *s1, const char *s2) 
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (int)(*s1) - (int)(*s2);
}

int strncmp(const char *s1, const char *s2, size_t n)
{
	while(n != 0 && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (n == 0) ? 0 : (int)(*s1) - (int)(*s2);
}

void *memset(void *s, int c, size_t n) 
{
	uint8_t *p = s;
	while(n--)
		*p++ = (uint8_t)c;
	return s;
}

void *memmove(void *dst, const void *src, size_t n) 
{
	uint8_t *p = dst;
	const uint8_t *q = src;
	if(p < q)
	{
		while(n--)
			*p++ = *q++;
	}
	else
	{
		p += n;
		q += n;
		while(n--)
			*--p = *--q;
	}
	return dst;
}

void *memcpy(void *out, const void *in, size_t n) 
{
	uint8_t *p = out;
	const uint8_t *q = in;
	// memory overlap: UB
	while(n--)
		*p++ = *q++;
	return out;
}

int memcmp(const void *s1, const void *s2, size_t n) 
{
	const uint8_t *p1 = s1, *p2 = s2;
	while(n != 0 && *p1 && *p2 && *p1 == *p2)
	{
		p1++;
		p2++;
		n--;
	}
	return (n == 0) ? 0 : (int)(*p1) - (int)(*p2);
}

#endif
