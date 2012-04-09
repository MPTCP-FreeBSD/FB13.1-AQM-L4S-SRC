/*-
 * Copyright (c) 2001 Brian Somers <brian@Awfulhak.org>
 *                    based on work by Slawa Olhovchenkov
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: src/sys/dev/digi/Xe.bios.h,v 1.2.22.1.8.1 2012/03/03 06:15:13 kensmith Exp $
 */

static const u_char Xe_bios[] = {
  0x28, 0x43, 0x29, 0x20, 0x43, 0x6f, 0x70, 0x79, 0x72, 0x69, 0x67, 0x68, 0x74,
  0x20, 0x31, 0x39, 0x39, 0x34, 0x2c, 0x20, 0x44, 0x69, 0x67, 0x69, 0x42, 0x6f,
  0x61, 0x72, 0x64, 0x20, 0x49, 0x6e, 0x63, 0x2e, 0x00, 0x00, 0x8a, 0xf8, 0x8a,
  0xf8, 0x15, 0xf9, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8,
  0xbc, 0xf8, 0x8a, 0xf8, 0x96, 0xf8, 0x96, 0xf8, 0x96, 0xf8, 0x96, 0xf8, 0x96,
  0xf8, 0x96, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x96, 0xf8, 0x96, 0xf8, 0x8a, 0xf8,
  0xad, 0xf8, 0xb0, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a,
  0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x8a, 0xf8, 0x04, 0x02,
  0x00, 0x02, 0x14, 0x02, 0x10, 0x02, 0x24, 0x02, 0x20, 0x02, 0x34, 0x02, 0x30,
  0x02, 0x44, 0x02, 0x40, 0x02, 0x54, 0x02, 0x50, 0x02, 0x64, 0x02, 0x60, 0x02,
  0x74, 0x02, 0x70, 0x02, 0x04, 0x01, 0x00, 0x01, 0x1e, 0x2e, 0x8e, 0x1e, 0x22,
  0xf8, 0xfe, 0x06, 0x70, 0x00, 0x1f, 0xcf, 0x1e, 0x50, 0x52, 0x2e, 0x8e, 0x1e,
  0x22, 0xf8, 0xfe, 0x06, 0x71, 0x00, 0xb8, 0x00, 0x80, 0xba, 0x22, 0xff, 0xef,
  0x5a, 0x58, 0x1f, 0xcf, 0xb4, 0x80, 0xcf, 0x1e, 0x2e, 0x8e, 0x1e, 0x22, 0xf8,
  0xfe, 0x06, 0x2b, 0x00, 0x1f, 0xcf, 0x1e, 0x52, 0x50, 0x2e, 0x8e, 0x1e, 0x22,
  0xf8, 0xcd, 0x16, 0xfe, 0x06, 0x2a, 0x00, 0x80, 0x3e, 0x2a, 0x00, 0x12, 0x72,
  0x39, 0xc6, 0x06, 0x2a, 0x00, 0x00, 0xfe, 0x06, 0x29, 0x00, 0x80, 0x3e, 0x29,
  0x00, 0x3c, 0x72, 0x29, 0xc6, 0x06, 0x29, 0x00, 0x00, 0xfe, 0x06, 0x28, 0x00,
  0x80, 0x3e, 0x28, 0x00, 0x3c, 0x72, 0x19, 0xc6, 0x06, 0x28, 0x00, 0x00, 0xfe,
  0x06, 0x27, 0x00, 0x80, 0x3e, 0x27, 0x00, 0x18, 0x72, 0x09, 0xc6, 0x06, 0x27,
  0x00, 0x00, 0xff, 0x06, 0x25, 0x00, 0xba, 0x22, 0xff, 0xb8, 0x00, 0x80, 0xef,
  0x58, 0x5a, 0x1f, 0xcf, 0x60, 0x1e, 0x06, 0xfc, 0x2e, 0x8e, 0x06, 0x22, 0xf8,
  0x2e, 0x8e, 0x1e, 0x22, 0xf8, 0x8d, 0x36, 0x40, 0x00, 0xad, 0x3c, 0x3f, 0x7f,
  0x22, 0x3c, 0x1f, 0x7f, 0x22, 0x32, 0xe4, 0xd1, 0xe0, 0x3d, 0x16, 0x00, 0x90,
  0x73, 0x14, 0xbb, 0x56, 0xf9, 0x03, 0xd8, 0x2e, 0xff, 0x17, 0x8d, 0x36, 0x40,
  0x00, 0xb0, 0x00, 0x89, 0x04, 0x07, 0x1f, 0x61, 0xcf, 0xb4, 0x80, 0xeb, 0xf0,
  0xcd, 0x15, 0xeb, 0xec, 0x6c, 0xf9, 0x79, 0xf9, 0xb9, 0xf9, 0xd3, 0xf9, 0xd8,
  0xf9, 0xe1, 0xf9, 0xe9, 0xf9, 0xf2, 0xf9, 0xfa, 0xf9, 0xfd, 0xf9, 0x2a, 0xfa,
  0xe4, 0x00, 0x24, 0xf7, 0xe6, 0x00, 0x0c, 0x08, 0xe6, 0x00, 0xb4, 0x00, 0xc3,
  0x1e, 0xad, 0x8b, 0xd8, 0xad, 0x8e, 0xdb, 0x8b, 0xf0, 0x33, 0xdb, 0x8b, 0x07,
  0x3d, 0x4f, 0x53, 0x75, 0x2a, 0x8a, 0x47, 0x02, 0x32, 0xe4, 0x86, 0xc4, 0x8b,
  0xc8, 0x32, 0xc0, 0x02, 0x07, 0x43, 0xe2, 0xfb, 0x0a, 0xc0, 0x75, 0x16, 0x8c,
  0xd9, 0x1f, 0x89, 0x0e, 0x2e, 0x00, 0x89, 0x36, 0x2c, 0x00, 0x8d, 0x1e, 0x02,
  0x00, 0xc7, 0x07, 0x45, 0x4d, 0x32, 0xe4, 0xc3, 0x1f, 0xb4, 0x80, 0xc3, 0xad,
  0x8b, 0xd8, 0xad, 0x8b, 0xd0, 0xad, 0x8e, 0xc0, 0xad, 0x8b, 0xf8, 0xad, 0x8b,
  0xc8, 0x8b, 0xf2, 0x1e, 0x8e, 0xdb, 0xf3, 0xa4, 0x1f, 0x32, 0xe4, 0xc3, 0xea,
  0xf0, 0xff, 0x00, 0xf0, 0xad, 0x8b, 0xd0, 0xec, 0x88, 0x04, 0x32, 0xe4, 0xc3,
  0xad, 0x8b, 0xd0, 0xac, 0xee, 0x32, 0xe4, 0xc3, 0xad, 0x8b, 0xd0, 0xed, 0x89,
  0x04, 0x32, 0xe4, 0xc3, 0xad, 0x8b, 0xd0, 0xad, 0xef, 0x32, 0xe4, 0xc3, 0xb4,
  0x80, 0xc3, 0xac, 0x3c, 0x12, 0x7f, 0x25, 0xfe, 0xc8, 0x32, 0xe4, 0xd1, 0xe0,
  0x8d, 0x1e, 0x66, 0xf8, 0x03, 0xd8, 0x2e, 0x8b, 0x17, 0xec, 0xac, 0x3c, 0x0f,
  0x7f, 0x10, 0x3c, 0x00, 0x74, 0x03, 0xee, 0x90, 0x90, 0xec, 0x8b, 0xfe, 0x1e,
  0x07, 0xaa, 0x32, 0xe4, 0xc3, 0xb4, 0x80, 0xc3, 0xac, 0x3c, 0x12, 0x7f, 0x1f,
  0xfe, 0xc8, 0x32, 0xe4, 0xd1, 0xe0, 0x8d, 0x1e, 0x66, 0xf8, 0x03, 0xd8, 0x2e,
  0x8b, 0x17, 0xec, 0xac, 0x3c, 0x0f, 0x7f, 0x0a, 0x3c, 0x00, 0x74, 0x01, 0xee,
  0xac, 0xee, 0x32, 0xe4, 0xc3, 0xb4, 0x80, 0xc3, 0xfc, 0x8e, 0xc0, 0xb8, 0xff,
  0xff, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xab, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xaf,
  0xe3, 0x01, 0xc3, 0x8b, 0xcb, 0xbf, 0x00, 0x00, 0x26, 0x89, 0x3d, 0x83, 0xc7,
  0x02, 0xe2, 0xf8, 0xbe, 0x00, 0x00, 0x8b, 0xcb, 0x26, 0x8b, 0x3c, 0x3b, 0xfe,
  0x74, 0x01, 0xc3, 0x83, 0xc6, 0x02, 0x83, 0xc7, 0x02, 0xe2, 0xf0, 0x33, 0xc0,
  0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xab, 0x8b, 0xcb, 0x33, 0xff, 0xf3, 0xaf, 0xc3,
  0x32, 0xc0, 0x26, 0x80, 0x3e, 0x23, 0x00, 0x00, 0x74, 0x02, 0x0c, 0x01, 0x26,
  0xf7, 0x06, 0x20, 0x00, 0x0f, 0x00, 0x74, 0x02, 0x0c, 0x02, 0x26, 0xf7, 0x06,
  0x20, 0x00, 0xf0, 0x00, 0x74, 0x02, 0x0c, 0x04, 0x26, 0xf7, 0x06, 0x20, 0x00,
  0x00, 0xff, 0x74, 0x02, 0x0c, 0x08, 0x26, 0xa2, 0x24, 0x00, 0xb8, 0x00, 0x40,
  0xba, 0x5e, 0xff, 0xef, 0xba, 0x66, 0xff, 0xef, 0xba, 0x52, 0xff, 0xb8, 0x63,
  0x0e, 0xef, 0xba, 0x56, 0xff, 0xb8, 0x05, 0xe0, 0xef, 0xba, 0x28, 0xff, 0xb8,
  0xfc, 0x00, 0xef, 0xb8, 0x00, 0x02, 0x26, 0xa3, 0x2e, 0x00, 0xb8, 0x04, 0x00,
  0x26, 0xa3, 0x2c, 0x00, 0xb0, 0xc3, 0xe6, 0x08, 0x8a, 0xd8, 0xe4, 0x08, 0x3a,
  0xc3, 0x75, 0x06, 0x26, 0xc6, 0x06, 0xb4, 0x00, 0x01, 0xb0, 0x00, 0xe6, 0x00,
  0xfc, 0x8d, 0x3e, 0x00, 0x00, 0xb8, 0x47, 0x44, 0xab, 0xb8, 0xff, 0xff, 0xab,
  0xab, 0xab, 0xb8, 0x42, 0x49, 0xab, 0xb8, 0x4f, 0x53, 0xab, 0xb8, 0x58, 0x69,
  0x26, 0x80, 0x3e, 0x10, 0x00, 0x04, 0x74, 0x0e, 0xb8, 0x58, 0x65, 0x26, 0x80,
  0x3e, 0x10, 0x00, 0x03, 0x74, 0x03, 0xb8, 0x58, 0x74, 0xab, 0x8d, 0x36, 0xfe,
  0xff, 0x8a, 0x04, 0x8d, 0x36, 0xff, 0xff, 0x8a, 0x24, 0xab, 0xfb, 0x26, 0x81,
  0x0e, 0x12, 0x00, 0x00, 0x08, 0x06, 0x1f, 0xa1, 0x00, 0x00, 0x8b, 0x1e, 0x02,
  0x00, 0x3d, 0x44, 0x47, 0x75, 0x0b, 0x26, 0x81, 0x0e, 0x12, 0x00, 0x00, 0x10,
  0xff, 0x2e, 0x2c, 0x00, 0x81, 0xfb, 0x45, 0x4d, 0x75, 0xe3, 0x26, 0x81, 0x0e,
  0x12, 0x00, 0x00, 0x20, 0xff, 0x2e, 0x2c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xba, 0xa8,
  0xff, 0xb8, 0xba, 0x81, 0xef, 0xba, 0xa4, 0xff, 0xb8, 0x3a, 0x00, 0xef, 0x90,
  0xe4, 0x00, 0xa8, 0x60, 0x75, 0x0c, 0x24, 0x06, 0x74, 0x14, 0x3c, 0x02, 0x74,
  0x1c, 0x3c, 0x04, 0x74, 0x24, 0xbb, 0x38, 0xc0, 0xbe, 0xf8, 0x81, 0xbf, 0xba,
  0xa0, 0xeb, 0x22, 0x90, 0xbb, 0x38, 0xf0, 0xbe, 0xf8, 0x41, 0xbf, 0xba, 0x81,
  0xeb, 0x16, 0x90, 0xbb, 0x38, 0xf0, 0xbe, 0xf8, 0xe1, 0xbf, 0xba, 0x88, 0xeb,
  0x0a, 0x90, 0xbb, 0x38, 0xc0, 0xbe, 0xf8, 0x41, 0xbf, 0xba, 0x81, 0xba, 0xa0,
  0xff, 0x8b, 0xc3, 0xef, 0xba, 0xa2, 0xff, 0xb8, 0xf8, 0x0f, 0xef, 0xba, 0xa6,
  0xff, 0x8b, 0xc6, 0xef, 0xba, 0xa8, 0xff, 0x8b, 0xc7, 0xef, 0x8c, 0xc8, 0x8e,
  0xd8, 0xe4, 0x00, 0x24, 0x06, 0x74, 0x17, 0xbb, 0x00, 0x80, 0xbd, 0xc0, 0xe0,
  0x3c, 0x02, 0x74, 0x5a, 0xbd, 0xc0, 0xc0, 0x3c, 0x04, 0x74, 0x53, 0xbd, 0xc0,
  0x80, 0xeb, 0x4e, 0x90, 0xb9, 0x08, 0x00, 0xb8, 0x00, 0x80, 0x8e, 0xc0, 0x26,
  0xa3, 0x00, 0x00, 0x05, 0x00, 0x10, 0xe2, 0xf5, 0xbd, 0xc0, 0xf0, 0xbb, 0x00,
  0x7c, 0xb8, 0x00, 0xe0, 0x8e, 0xc0, 0x26, 0x8b, 0x0e, 0x00, 0x00, 0x3b, 0xc8,
  0x75, 0x28, 0xbb, 0x00, 0x80, 0xbd, 0xc0, 0xe0, 0xb8, 0x00, 0xc0, 0x8e, 0xc0,
  0x26, 0x8b, 0x0e, 0x00, 0x00, 0x3b, 0xc8, 0x75, 0x14, 0xbd, 0xc0, 0xc0, 0xb8,
  0x00, 0x80, 0x8e, 0xc0, 0x26, 0x8b, 0x0e, 0x00, 0x00, 0x3b, 0xc8, 0x75, 0x03,
  0xbd, 0xc0, 0x80, 0x8c, 0xc8, 0x8e, 0xd0, 0xbc, 0xed, 0xfc, 0x8b, 0xc5, 0x25,
  0x00, 0xf0, 0xe9, 0x6c, 0xfd, 0xb4, 0x00, 0x74, 0x06, 0xb4, 0xff, 0xeb, 0x02,
  0xe5, 0xfc, 0x8e, 0xc5, 0x2e, 0x89, 0x2e, 0x22, 0xf8, 0xe4, 0x00, 0x24, 0x16,
  0x26, 0xa2, 0x11, 0x00, 0x26, 0x83, 0x0e, 0x12, 0x00, 0x01, 0x80, 0xfc, 0x00,
  0x74, 0x06, 0x26, 0x83, 0x0e, 0x14, 0x00, 0x01, 0x26, 0xc7, 0x06, 0x18, 0x00,
  0x40, 0x00, 0x26, 0xc6, 0x06, 0x10, 0x00, 0x03, 0xa8, 0x10, 0x74, 0x06, 0x26,
  0xc6, 0x06, 0x10, 0x00, 0x04, 0xb8, 0x00, 0x00, 0x8e, 0xc0, 0xb8, 0xaa, 0x55,
  0x26, 0xa3, 0x00, 0x00, 0x26, 0xc7, 0x06, 0x02, 0x00, 0x00, 0x00, 0x26, 0xc7,
  0x06, 0x04, 0x00, 0x00, 0x00, 0x8b, 0xcd, 0x81, 0xe1, 0x00, 0xf0, 0x8e, 0xc1,
  0x26, 0x8b, 0x1e, 0x00, 0x00, 0x3b, 0xc3, 0x75, 0x13, 0x8e, 0xc5, 0x26, 0xc6,
  0x06, 0x10, 0x00, 0x05, 0xb8, 0x40, 0x00, 0x8e, 0xd0, 0xbc, 0x00, 0x04, 0xe9,
  0x99, 0x00, 0x8c, 0xc8, 0x8e, 0xd0, 0xbc, 0x7c, 0xfd, 0xb8, 0x00, 0x00, 0xbb,
  0x00, 0x20, 0xe9, 0xdd, 0xfc, 0xb4, 0x00, 0x74, 0x06, 0xb4, 0xff, 0xeb, 0x02,
  0x74, 0xfd, 0x8e, 0xc5, 0x80, 0xfc, 0x00, 0x74, 0x08, 0x26, 0x83, 0x0e, 0x14,
  0x00, 0x02, 0xeb, 0x0d, 0x26, 0xc7, 0x06, 0x16, 0x00, 0x10, 0x00, 0x26, 0x83,
  0x0e, 0x12, 0x00, 0x02, 0xb8, 0x40, 0x00, 0x8e, 0xd0, 0xbc, 0x00, 0x04, 0xe4,
  0x00, 0xa8, 0x60, 0x75, 0x07, 0xba, 0xa2, 0xff, 0xb8, 0xfc, 0x0f, 0xef, 0xb8,
  0x00, 0x04, 0x8e, 0xc0, 0xb8, 0xaa, 0x55, 0x26, 0xa3, 0x00, 0x00, 0x26, 0xc7,
  0x06, 0x02, 0x00, 0x00, 0x00, 0x26, 0xc7, 0x06, 0x04, 0x00, 0x00, 0x00, 0xb9,
  0x00, 0x00, 0x8e, 0xc1, 0x26, 0x8b, 0x1e, 0x00, 0x00, 0x3b, 0xc3, 0x75, 0x02,
  0xeb, 0x24, 0x8e, 0xc5, 0x26, 0x83, 0x0e, 0x12, 0x00, 0x04, 0xb8, 0x00, 0x04,
  0xbb, 0x00, 0x60, 0x06, 0xe8, 0x66, 0xfc, 0x07, 0x75, 0x09, 0x26, 0xc7, 0x06,
  0x16, 0x00, 0x40, 0x00, 0xeb, 0x06, 0x26, 0x83, 0x0e, 0x14, 0x00, 0x04, 0x8e,
  0xc5, 0x8c, 0xc0, 0x3d, 0xc0, 0xf0, 0x75, 0x03, 0xe9, 0x9f, 0x00, 0x3d, 0xc0,
  0x80, 0x74, 0x62, 0x3d, 0xc0, 0xc0, 0x74, 0x23, 0x26, 0x83, 0x0e, 0x12, 0x00,
  0x08, 0xb8, 0x00, 0xf0, 0xbb, 0x00, 0x7c, 0x06, 0xe8, 0x2e, 0xfc, 0x07, 0x75,
  0x08, 0x26, 0x83, 0x06, 0x18, 0x00, 0x40, 0xeb, 0x06, 0x26, 0x83, 0x0e, 0x14,
  0x00, 0x08, 0xeb, 0x72, 0xb9, 0x03, 0x00, 0xb8, 0x00, 0xd0, 0xba, 0x08, 0x00,
  0xbb, 0x00, 0x80, 0x3d, 0x00, 0xf0, 0x75, 0x03, 0xbb, 0x00, 0x7c, 0x26, 0x09,
  0x16, 0x12, 0x00, 0x06, 0x50, 0x51, 0xe8, 0xfc, 0xfb, 0x59, 0x58, 0x07, 0x75,
  0x0f, 0x26, 0x83, 0x06, 0x18, 0x00, 0x40, 0xd1, 0xe2, 0x05, 0x00, 0x10, 0xe2,
  0xd8, 0xeb, 0x05, 0x26, 0x09, 0x16, 0x14, 0x00, 0xeb, 0x38, 0xb9, 0x07, 0x00,
  0xb8, 0x00, 0x90, 0xba, 0x08, 0x00, 0xbb, 0x00, 0x80, 0x3d, 0x00, 0xf0, 0x75,
  0x03, 0xbb, 0x00, 0x7c, 0x26, 0x09, 0x16, 0x12, 0x00, 0x06, 0x50, 0x51, 0xe8,
  0xc2, 0xfb, 0x59, 0x58, 0x07, 0x75, 0x0f, 0x26, 0x83, 0x06, 0x18, 0x00, 0x40,
  0xd1, 0xe2, 0x05, 0x00, 0x10, 0xe2, 0xd8, 0xeb, 0x05, 0x26, 0x09, 0x16, 0x14,
  0x00, 0x26, 0xa1, 0x18, 0x00, 0x2d, 0x10, 0x00, 0x26, 0xa3, 0x1a, 0x00, 0x06,
  0xfc, 0x33, 0xff, 0x8e, 0xc7, 0xb9, 0x00, 0x02, 0xb8, 0x00, 0xf0, 0xf3, 0xab,
  0x33, 0xff, 0xbe, 0x24, 0xf8, 0xb9, 0x20, 0x00, 0xa5, 0x47, 0x47, 0xe2, 0xfb,
  0xbe, 0x64, 0xf8, 0xb9, 0xe0, 0x00, 0x8b, 0x1c, 0x26, 0x89, 0x1d, 0x83, 0xc7,
  0x04, 0xe2, 0xf8, 0x07, 0xba, 0x28, 0xff, 0xb8, 0xfd, 0x00, 0xef, 0xba, 0x32,
  0xff, 0xb8, 0x0d, 0x00, 0xef, 0xba, 0x34, 0xff, 0xb8, 0x0f, 0x00, 0xef, 0xba,
  0x36, 0xff, 0xb8, 0x0e, 0x00, 0xef, 0xba, 0x38, 0xff, 0xb8, 0x19, 0x00, 0xef,
  0xba, 0x3a, 0xff, 0xb8, 0x18, 0x00, 0xef, 0xba, 0x3c, 0xff, 0xb8, 0x0b, 0x00,
  0xef, 0xba, 0x3e, 0xff, 0xb8, 0x1a, 0x00, 0xef, 0x8d, 0x3e, 0x90, 0x00, 0x8d,
  0x36, 0x66, 0xf8, 0xb9, 0x10, 0x00, 0xf3, 0xa5, 0x8d, 0x3e, 0xb0, 0x00, 0x8d,
  0x36, 0x86, 0xf8, 0xb9, 0x02, 0x00, 0xf3, 0xa5, 0xb9, 0x10, 0x00, 0x8d, 0x36,
  0x90, 0x00, 0x83, 0xc6, 0x1e, 0x26, 0x8b, 0x14, 0xb3, 0x10, 0x32, 0xc0, 0xec,
  0xb0, 0x0c, 0xee, 0x8a, 0xc3, 0x8a, 0xc3, 0xee, 0x83, 0xee, 0x02, 0x26, 0x8b,
  0x14, 0xfe, 0xcb, 0xe2, 0xeb, 0xb9, 0x10, 0x00, 0x8d, 0x36, 0x90, 0x00, 0x26,
  0x8b, 0x14, 0xb3, 0x01, 0xbf, 0x00, 0x80, 0xb0, 0x0c, 0xee, 0xf6, 0xe8, 0xec,
  0x3a, 0xc3, 0x75, 0x0e, 0xd1, 0xc7, 0x26, 0x09, 0x3e, 0x20, 0x00, 0x26, 0xfe,
  0x06, 0x22, 0x00, 0xeb, 0x07, 0x33, 0xc0, 0x26, 0x89, 0x04, 0xd1, 0xc7, 0x83,
  0xc6, 0x02, 0x26, 0x8b, 0x14, 0xfe, 0xc3, 0xe2, 0xd7, 0x26, 0xc6, 0x06, 0x23,
  0x00, 0x01, 0x8d, 0x36, 0xb0, 0x00, 0x26, 0x8b, 0x14, 0x32, 0xc0, 0xee, 0xb0,
  0x0c, 0xee, 0xb0, 0x5a, 0xee, 0xb0, 0x0c, 0xee, 0xf6, 0xe8, 0xec, 0x3c, 0x5a,
  0x74, 0x14, 0x26, 0xc7, 0x06, 0xb0, 0x00, 0x00, 0x00, 0x26, 0xc7, 0x06, 0xb2,
  0x00, 0x00, 0x00, 0x26, 0xc6, 0x06, 0x23, 0x00, 0x00, 0xe9, 0xd3, 0xfa, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xea, 0x00, 0xfc, 0x00, 0xf0, 0x4d, 0x2f, 0x50, 0x43,
  0x2f, 0x58, 0x2a, 0x39, 0x34, 0x34, 0x31
};
