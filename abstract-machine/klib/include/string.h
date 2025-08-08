#ifndef _BASIC_STRING_H_
#define _BASIC_STRING_H_

#include <stddef.h>  // For size_t and NULL

/*
 * This is a minimal, self-contained string.h for bare-metal projects.
 */

// --- Function Prototypes ---
// The actual implementations are in your project's C library (klib).

// Memory manipulation functions
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int   memcmp(const void *s1, const void *s2, size_t n);
void *memchr(const void *s, int c, size_t n);


// String manipulation functions
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);

char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

int   strcmp(const char *s1, const char *s2);
int   strncmp(const char *s1, const char *s2, size_t n);

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
size_t strlen(const char *s);
char *strstr(const char *haystack, const char *needle);
char *strerror(int errnum);

#endif /* _BASIC_STRING_H_ */