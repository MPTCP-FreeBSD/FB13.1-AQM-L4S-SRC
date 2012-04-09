#!/bin/sh

# $FreeBSD: src/tools/regression/usr.bin/make/suffixes/basic/test.t,v 1.1.22.1.8.1 2012/03/03 06:15:13 kensmith Exp $

cd `dirname $0`
. ../../common.sh

# Description
DESC="Basic suffix operation."

# Setup
TEST_COPY_FILES="TEST1.a 644"

# Reset
TEST_CLEAN="Test1.b"

# Run
TEST_N=1
TEST_1="-r test1"

eval_cmd $*
