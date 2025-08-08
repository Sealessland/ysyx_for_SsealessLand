#ifndef _SYS_TYPES_H_
#define _SYS_TYPES_H_

#include <stddef.h> // We need size_t from the file we already created
#include <stdint.h> // We need fixed-width types

/*
 * This is a minimal, self-contained sys/types.h for bare-metal projects.
 */

// Signed version of size_t, used for return values that can be -1 on error
typedef int ssize_t;

// Used for file sizes and seeking offsets
typedef long off_t;

// Used for time in seconds
typedef long time_t;

// Used for measuring processor time ticks
typedef unsigned long clock_t;

// Other common types that might be needed later
// typedef unsigned int mode_t;  // For file permissions
// typedef int pid_t;             // For process IDs

#endif /* _SYS_TYPES_H_ */