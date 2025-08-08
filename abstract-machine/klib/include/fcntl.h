#ifndef _BASIC_FCNTL_H_
#define _BASIC_FCNTL_H_

#include <sys/types.h> // For mode_t, though we can define it here if needed

/*
 * This is a minimal, self-contained fcntl.h for bare-metal projects.
 * The values are common placeholders and may need to be adjusted
 * to match the underlying file system implementation.
 */

// --- File open flags ---
// These are access modes and are not bit-flags.
#define O_RDONLY    0
#define O_WRONLY    1
#define O_RDWR      2

// These are file creation and status flags, which are bit-flags.
#define O_APPEND    0x0008
#define O_CREAT     0x0200
#define O_TRUNC     0x0400
#define O_EXCL      0x0800
#define O_NONBLOCK  0x4000
#define O_DIRECTORY 0x100000


// --- Function Prototypes ---
// The actual implementations are in your project's C library (klib) or filesystem layer.

int open(const char *path, int oflag, ...);
int creat(const char *path, int mode);
int fcntl(int fd, int cmd, ...);


#endif /* _BASIC_FCNTL_H_ */