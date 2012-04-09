/*
 * MD header for contrib/gdtoa
 *
 * $FreeBSD: src/lib/libc/i386/arith.h,v 1.2.34.1.8.1 2012/03/03 06:15:13 kensmith Exp $
 */

/*
 * NOTE: The definitions in this file must be correct or strtod(3) and
 * floating point formats in printf(3) will break!  The file can be
 * generated by running contrib/gdtoa/arithchk.c on the target
 * architecture.  See contrib/gdtoa/gdtoaimp.h for details.
 */

#define IEEE_8087
#define Arith_Kind_ASL 1
