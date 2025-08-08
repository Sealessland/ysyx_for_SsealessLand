#ifndef _BASIC_STDLIB_H_
#define _BASIC_STDLIB_H_

#include <stddef.h>  // For size_t and NULL

/*
 * This is a minimal, self-contained stdlib.h for bare-metal projects.
 */

// --- Function Prototypes ---
// The actual implementations are in your project's C library (klib).

// Memory management functions
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

// String conversion functions
int   atoi(const char *nptr);
long  atol(const char *nptr);
long  strtol(const char *nptr, char **endptr, int base);
unsigned long strtoul(const char *nptr, char **endptr, int base);

// Pseudo-random sequence generation
int  rand(void);
void srand(unsigned int seed);

// Program termination functions
void abort(void);
void exit(int status);

#endif /* _BASIC_STDLIB_H_ */