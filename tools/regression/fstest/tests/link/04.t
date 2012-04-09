#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/link/04.t,v 1.1.10.1.8.1 2012/03/03 06:15:13 kensmith Exp $

desc="link returns ENOENT if a component of either path prefix does not exist"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..6"

n0=`namegen`
n1=`namegen`
n2=`namegen`

expect 0 mkdir ${n0} 0755
expect ENOENT link ${n0}/${n1}/test ${n2}
expect 0 create ${n2} 0644
expect ENOENT link ${n2} ${n0}/${n1}/test
expect 0 unlink ${n2}
expect 0 rmdir ${n0}
