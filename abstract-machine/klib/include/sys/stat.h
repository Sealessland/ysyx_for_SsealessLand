#ifndef _SYS_STAT_H_
#define _SYS_STAT_H_

#include <sys/types.h>
#include <time.h>

/*
 * This is a minimal, self-contained sys/stat.h for bare-metal projects.
 */

// If mode_t was not defined in your sys/types.h, define it here as a fallback.
#ifndef __mode_t_defined
typedef unsigned int mode_t;
#define __mode_t_defined
#endif


// --- File type and mode definitions ---
#define S_IFMT      0170000 // bit mask for the file type bitfields
#define S_IFSOCK    0140000 // socket
#define S_IFLNK     0120000 // symbolic link
#define S_IFREG     0100000 // regular file
#define S_IFBLK     0060000 // block device
#define S_IFDIR     0040000 // directory
#define S_IFCHR     0020000 // character device
#define S_IFIFO     0010000 // FIFO

// Macros to check file type
#define S_ISREG(m)  (((m) & S_IFMT) == S_IFREG)
#define S_ISDIR(m)  (((m) & S_IFMT) == S_IFDIR)
#define S_ISCHR(m)  (((m) & S_IFMT) == S_IFCHR)
#define S_ISBLK(m)  (((m) & S_IFMT) == S_IFBLK)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define S_ISLNK(m)  (((m) & S_IFMT) == S_IFLNK)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_ISSOCK)


// --- The stat structure ---
struct stat {
    // We define a minimal set of fields.
    // The exact structure depends on the underlying filesystem.
    mode_t  st_mode;    // file type and mode
    off_t   st_size;    // total size, in bytes
    time_t  st_mtime;   // time of last modification
    // Other fields like st_ino, st_dev, st_nlink etc. can be added if needed.
};


// --- Function Prototypes ---
// The actual implementations are in your project's C library or filesystem layer.
int stat(const char *pathname, struct stat *statbuf);
int fstat(int fd, struct stat *statbuf);
int lstat(const char *pathname, struct stat *statbuf);
int mkdir(const char *pathname, mode_t mode);


#endif /* _SYS_STAT_H_ */