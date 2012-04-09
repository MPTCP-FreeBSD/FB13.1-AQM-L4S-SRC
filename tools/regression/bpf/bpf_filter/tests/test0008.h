/*-
 * Test 0008:	BPF_LDX+BPF_W+BPF_LEN & BPF_MISC+BPF_TXA
 *
 * $FreeBSD: src/tools/regression/bpf/bpf_filter/tests/test0008.h,v 1.3.2.1.8.1 2012/03/03 06:15:13 kensmith Exp $
 */

/* BPF program */
struct bpf_insn pc[] = {
	BPF_STMT(BPF_LDX+BPF_W+BPF_LEN, 0),
	BPF_STMT(BPF_MISC+BPF_TXA, 0),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
u_int	wirelen =	0xdeadc0de;

/* Packet length passed on buffer */
u_int	buflen =	0xdeadc0de;

/* Invalid instruction */
int	invalid =	0;

/* Expected return value */
u_int	expect =	0xdeadc0de;

/* Expected signal */
int	expect_signal =	0;
