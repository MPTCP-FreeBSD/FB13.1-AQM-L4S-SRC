/*
 * Written by J.T. Conklin, Apr 10, 1995
 * Public domain.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/lib/libc/i386/gen/flt_rounds.c,v 1.1.30.1.8.1 2012/03/03 06:15:13 kensmith Exp $");

#include <float.h>

static const int map[] = {
	1,	/* round to nearest */
	3,	/* round to zero */
	2,	/* round to negative infinity */
	0	/* round to positive infinity */
};

int
__flt_rounds(void)
{
	int x;

	__asm("fnstcw %0" : "=m" (x));
        return (map[(x >> 10) & 0x03]);
}
