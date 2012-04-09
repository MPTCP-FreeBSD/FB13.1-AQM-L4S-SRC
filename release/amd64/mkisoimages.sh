#!/bin/sh
#
# Module: mkisoimages.sh
# Author: Jordan K Hubbard
# Date:   22 June 2001
#
# $FreeBSD: src/release/amd64/mkisoimages.sh,v 1.11.22.2.2.1 2012/03/03 06:15:13 kensmith Exp $
#
# This script is used by release/Makefile to build the (optional) ISO images
# for a FreeBSD release.  It is considered architecture dependent since each
# platform has a slightly unique way of making bootable CDs.  This script
# is also allowed to generate any number of images since that is more of
# publishing decision than anything else.
#
# Usage:
#
# mkisoimages.sh [-b] image-label image-name base-bits-dir [extra-bits-dir]
#
# Where -b is passed if the ISO image should be made "bootable" by
# whatever standards this architecture supports (may be unsupported),
# image-label is the ISO image label, image-name is the filename of the
# resulting ISO image, base-bits-dir contains the image contents and
# extra-bits-dir, if provided, contains additional files to be merged
# into base-bits-dir as part of making the image.

if [ "x$1" = "x-b" ]; then
	# This is highly x86-centric and will be used directly below.
	bootable="-o bootimage=i386;$4/boot/cdboot -o no-emul-boot"
	shift
else
	bootable=""
fi

if [ $# -lt 3 ]; then
	echo Usage: $0 '[-b] image-label image-name base-bits-dir [extra-bits-dir]'
	exit 1
fi

LABEL=$1; shift
NAME=$1; shift

makefs -t cd9660 $bootable -o rockridge -o label=$LABEL $NAME $*
