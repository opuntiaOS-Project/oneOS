#ifndef _LIBC_BITS_IOCTLS_H
#define _LIBC_BITS_IOCTLS_H

/* TTY */
#define TIOCGPGRP 0x0101
#define TIOCSPGRP 0x0102
#define TCGETS 0x0103
#define TCSETS 0x0104
#define TCSETSW 0x0105
#define TCSETSF 0x0106

/* BGA */
#define BGA_SWAP_BUFFERS 0x0101

#endif // _LIBC_BITS_IOCTLS_H