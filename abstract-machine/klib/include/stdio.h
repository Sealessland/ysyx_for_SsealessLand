#ifndef _BASIC_STDIO_H_
#define _BASIC_STDIO_H_

#include <stddef.h>  // For NULL and size_t
#include <stdarg.h>  // For va_list, used in printf, etc.

/*
 * This is a minimal, self-contained stdio.h for bare-metal projects.
 */

// Define the End-Of-File constant
#define EOF (-1)

// In a bare-metal context, we often only need a forward declaration
// for the FILE type. The full definition is in the C library's source.
typedef struct FILE FILE;

// Standard I/O stream pointers (often placeholders in bare-metal)
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;


// --- Function Prototypes ---
// The actual implementations are in your project's C library (klib).

int printf(const char *format, ...);
int sprintf(char *str, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int vsprintf(char *str, const char *format, va_list ap);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);

int sscanf(const char *str, const char *format, ...);

int puts(const char *s);
int putchar(int c);

#endif /* _BASIC_STDIO_H_ */