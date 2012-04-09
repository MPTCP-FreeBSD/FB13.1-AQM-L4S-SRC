/*	$FreeBSD: src/contrib/ipfilter/lib/rwlock_emul.c,v 1.3.10.1.8.1 2012/03/03 06:15:13 kensmith Exp $	*/

/*
 * Copyright (C) 2003 by Darren Reed.
 * 
 * See the IPFILTER.LICENCE file for details on licencing.  
 *   
 * $Id: rwlock_emul.c,v 1.1.4.1 2006/06/16 17:21:17 darrenr Exp $ 
 */     

#include "ipf.h"

#define	EMM_MAGIC	0x97dd8b3a

void eMrwlock_read_enter(rw, file, line)
eMrwlock_t *rw;
char *file;
int line;
{
	if (rw->eMrw_magic != EMM_MAGIC) {
		fprintf(stderr, "%s:eMrwlock_read_enter(%p): bad magic: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	if (rw->eMrw_read != 0 || rw->eMrw_write != 0) {
		fprintf(stderr,
			"%s:eMrwlock_read_enter(%p): already locked: %d/%d\n",
			rw->eMrw_owner, rw, rw->eMrw_read, rw->eMrw_write);
		abort();
	}
	rw->eMrw_read++;
	rw->eMrw_heldin = file;
	rw->eMrw_heldat = line;
}


void eMrwlock_write_enter(rw, file, line)
eMrwlock_t *rw;
char *file;
int line;
{
	if (rw->eMrw_magic != EMM_MAGIC) {
		fprintf(stderr, "%s:eMrwlock_write_enter(%p): bad magic: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	if (rw->eMrw_read != 0 || rw->eMrw_write != 0) {
		fprintf(stderr,
			"%s:eMrwlock_write_enter(%p): already locked: %d/%d\n",
			rw->eMrw_owner, rw, rw->eMrw_read, rw->eMrw_write);
		abort();
	}
	rw->eMrw_write++;
	rw->eMrw_heldin = file;
	rw->eMrw_heldat = line;
}


void eMrwlock_downgrade(rw, file, line)
eMrwlock_t *rw;
char *file;
int line;
{
	if (rw->eMrw_magic != EMM_MAGIC) {
		fprintf(stderr, "%s:eMrwlock_write_enter(%p): bad magic: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	if (rw->eMrw_read != 0 || rw->eMrw_write != 1) {
		fprintf(stderr,
			"%s:eMrwlock_write_enter(%p): already locked: %d/%d\n",
			rw->eMrw_owner, rw, rw->eMrw_read, rw->eMrw_write);
		abort();
	}
	rw->eMrw_write--;
	rw->eMrw_read++;
	rw->eMrw_heldin = file;
	rw->eMrw_heldat = line;
}


void eMrwlock_exit(rw)
eMrwlock_t *rw;
{
	if (rw->eMrw_magic != EMM_MAGIC) {
		fprintf(stderr, "%s:eMrwlock_exit(%p): bad magic: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	if (rw->eMrw_read != 1 && rw->eMrw_write != 1) {
		fprintf(stderr, "%s:eMrwlock_exit(%p): not locked: %d/%d\n",
			rw->eMrw_owner, rw, rw->eMrw_read, rw->eMrw_write);
		abort();
	}
	if (rw->eMrw_read == 1)
		rw->eMrw_read--;
	else if (rw->eMrw_write == 1)
		rw->eMrw_write--;
	rw->eMrw_heldin = NULL;
	rw->eMrw_heldat = 0;
}


void eMrwlock_init(rw, who)
eMrwlock_t *rw;
char *who;
{
	if (rw->eMrw_magic == EMM_MAGIC) {	/* safe bet ? */
		fprintf(stderr,
			"%s:eMrwlock_init(%p): already initialised?: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	rw->eMrw_magic = EMM_MAGIC;
	rw->eMrw_read = 0;
	rw->eMrw_write = 0;
	if (who != NULL)
		rw->eMrw_owner = strdup(who);
	else
		rw->eMrw_owner = NULL;
}


void eMrwlock_destroy(rw)
eMrwlock_t *rw;
{
	if (rw->eMrw_magic != EMM_MAGIC) {
		fprintf(stderr, "%s:eMrwlock_destroy(%p): bad magic: %#x\n",
			rw->eMrw_owner, rw, rw->eMrw_magic);
		abort();
	}
	memset(rw, 0xa5, sizeof(*rw));
}
