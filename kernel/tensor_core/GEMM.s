	.file	"mat_kernel.cpp"
	.option nopic
	.attribute arch, "rv32i2p1_m2p0_a2p1_f2p2_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	li	a5,-1
 #APP
# 110 "/home/bakr/gpu/vortex/kernel/include/vx_intrinsics.h" 1
	.insn r 11, 0, 0, x0, a5, x0
# 0 "" 2
# 23 "mat_kernel.cpp" 1
	.insn r4 123, 1, 0, f16, f1, f2,f3
# 0 "" 2
# 24 "mat_kernel.cpp" 1
	.insn r4 123, 1, 0, f16, f1, f2,f3
# 0 "" 2
# 25 "mat_kernel.cpp" 1
	.insn r4 123, 1, 0, f16, f1, f2,f3
# 0 "" 2
# 26 "mat_kernel.cpp" 1
	.insn r4 123, 1, 0, f16, f1, f2,f3
# 0 "" 2
 #NO_APP
	li	a0,0
	ret
	.size	main, .-main
	.ident	"GCC: (g2ee5e430018-dirty) 12.2.0"
