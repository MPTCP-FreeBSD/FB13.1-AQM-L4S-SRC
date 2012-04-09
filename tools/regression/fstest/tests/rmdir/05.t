#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/rmdir/05.t,v 1.1.10.1.8.1 2012/03/03 06:15:13 kensmith Exp $

desc="rmdir returns ELOOP if too many symbolic links were encountered in translating the pathname"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..6"

n0=`namegen`
n1=`namegen`

expect 0 symlink ${n0} ${n1}
expect 0 symlink ${n1} ${n0}
expect ELOOP rmdir ${n0}/test
expect ELOOP rmdir ${n1}/test
expect 0 unlink ${n0}
expect 0 unlink ${n1}
