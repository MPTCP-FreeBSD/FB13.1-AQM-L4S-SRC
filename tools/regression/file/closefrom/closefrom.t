#!/bin/sh
# $FreeBSD: src/tools/regression/file/closefrom/closefrom.t,v 1.1.4.1.8.1 2012/03/03 06:15:13 kensmith Exp $

cd `dirname $0`

executable=`basename $0 .t`

make $executable 2>&1 > /dev/null

exec ./$executable
