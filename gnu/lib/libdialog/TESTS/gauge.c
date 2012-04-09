/*
 * small test-driver for new dialog functionality
 *
 * Copyright (c) 1995, Jordan Hubbard
 *
 * All rights reserved.
 *
 * This source code may be used, modified, copied, distributed, and
 * sold, in both source and binary form provided that the above
 * copyright and these terms are retained, verbatim, as the first
 * lines of this file.  Under no circumstances is the author
 * responsible for the proper functioning of the software nor does
 * the author assume any responsibility for damages incurred with
 * its use.
 */

#include <sys/cdefs.h>
__FBSDID("$FreeBSD: src/gnu/lib/libdialog/TESTS/gauge.c,v 1.7.34.1.8.1 2012/03/03 06:15:13 kensmith Exp $");

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <dialog.h>

/* Kick it off, James! */
int
main(int argc, char **argv)
{
  int i;

  init_dialog();

  for (i = 0; i <= 100; i++) {
    dialog_gauge("Gas tank", "When this gets 100% full, you'd better yank out the nozzle!", 10, 1, 7, 70, i);
    usleep(30000);
  }
  end_dialog();
  return 0;
}
