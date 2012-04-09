/*-
 * Test 0014:	BPF_STX & BPF_LD+BPF_MEM
 *
 * $FreeBSD: src/tools/regression/bpf/bpf_filter/tests/test0014.h,v 1.2.2.1.8.1 2012/03/03 06:15:13 kensmith Exp $
 */

/* BPF program */
struct bpf_insn pc[] = {
	BPF_STMT(BPF_LDX+BPF_IMM, 0xdeadc0de),
	BPF_STMT(BPF_STX, 7),
	BPF_STMT(BPF_LD+BPF_MEM, 7),
	BPF_STMT(BPF_RET+BPF_A, 0),
};

/* Packet */
u_char	pkt[] = {
	0x00,
};

/* Packet length seen on wire */
u_int	wirelen =	sizeof(pkt);

/* Packet length passed on buffer */
u_int	buflen =	sizeof(pkt);

/* Invalid instruction */
int	invalid =	0;

/* Expected return value */
u_int	expect =	0xdeadc0de;

/* Expected signal */
int	expect_signal =	0;
