#!/bin/sh
# $FreeBSD: src/tools/regression/fstest/tests/chflags/02.t,v 1.2.2.1.8.1 2012/03/03 06:15:13 kensmith Exp $

desc="chflags returns ENAMETOOLONG if a component of a pathname exceeded 255 characters"

dir=`dirname $0`
. ${dir}/../misc.sh

require chflags

echo "1..6"

expect 0 create ${name255} 0644
expect 0 chflags ${name255} SF_IMMUTABLE
expect SF_IMMUTABLE stat ${name255} flags
expect 0 chflags ${name255} none
expect 0 unlink ${name255}
expect ENAMETOOLONG chflags ${name256} SF_IMMUTABLE
