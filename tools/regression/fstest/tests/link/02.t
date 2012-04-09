#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/link/02.t,v 1.1.10.1.8.1 2012/03/03 06:15:13 kensmith Exp $

desc="link returns ENAMETOOLONG if a component of either pathname exceeded 255 characters"

dir=`dirname $0`
. ${dir}/../misc.sh

echo "1..10"

n0=`namegen`

expect 0 create ${name255} 0644
expect 0 link ${name255} ${n0}
expect 0 unlink ${name255}
expect 0 link ${n0} ${name255}
expect 0 unlink ${n0}
expect 0 unlink ${name255}

expect 0 create ${n0} 0644
expect ENAMETOOLONG link ${n0} ${name256}
expect 0 unlink ${n0}
expect ENAMETOOLONG link ${name256} ${n0}
