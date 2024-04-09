	.file	"kernel.cpp"
	.option nopic
	.attribute arch, "rv32i2p1_m2p0_a2p1_f2p2_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.globl	__floatsidf
	.globl	__truncdfsf2
	.globl	__extendsfdf2
	.section	.rodata.main.str1.4,"aMS",@progbits,1
	.align	2
.LC4:
	.string	"(%d) regA[%d] = %f\n"
	.align	2
.LC5:
	.string	"(%d) regB[%d] = %f\n"
	.align	2
.LC6:
	.string	"(%d) regC[%d] = %f\n"
	.align	2
.LC7:
	.string	"(%d) row_group = %d\n"
	.align	2
.LC8:
	.string	"(%d) col_group = %d\n"
	.align	2
.LC9:
	.string	"(%d) row_ptr = %d\n"
	.align	2
.LC10:
	.string	"i = %d, j = %d, k = %d\n"
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-144
	sw	ra,140(sp)
	sw	s0,136(sp)
	sw	s1,132(sp)
	sw	s2,128(sp)
	sw	s3,124(sp)
	sw	s4,120(sp)
	sw	s5,116(sp)
	sw	s6,112(sp)
	sw	s7,108(sp)
	sw	s8,104(sp)
	sw	s9,100(sp)
	sw	s10,96(sp)
	sw	s11,92(sp)
	fsw	fs0,76(sp)
	fsw	fs1,72(sp)
	fsw	fs2,68(sp)
	fsw	fs3,64(sp)
	fsw	fs4,60(sp)
	fsw	fs5,56(sp)
	fsw	fs6,52(sp)
	li	a5,-1
 #APP
# 110 "/home/bakr/gpu/vortex/kernel/include/vx_intrinsics.h" 1
	.insn r 11, 0, 0, x0, a5, x0
# 0 "" 2
# 159 "/home/bakr/gpu/vortex/kernel/include/vx_intrinsics.h" 1
	csrr s1, 3264
# 0 "" 2
# 166 "/home/bakr/gpu/vortex/kernel/include/vx_intrinsics.h" 1
	csrr a5, 3265
# 0 "" 2
# 173 "/home/bakr/gpu/vortex/kernel/include/vx_intrinsics.h" 1
	csrr a5, 3266
# 0 "" 2
 #NO_APP
	li	a5,2147479552
	lw	a0,0(a5)
	lw	a3,8(a5)
	lw	a5,4(a5)
	slli	a4,s1,4
	neg	a1,a4
	sw	a5,12(sp)
	srli	a5,s1,1
	sw	a5,16(sp)
	add	a5,a4,a0
	sw	a5,20(sp)
	srai	a5,a1,2
	sw	a5,24(sp)
	add	a5,a4,a3
	sw	a5,28(sp)
	li	s7,0
	flw	fs3,.LC0,a5
	flw	fs0,.LC1,a5
	lla	s4,.LC2
	flw	fs1,.LC3,a5
.L2:
	lw	a2,16(sp)
	mv	a1,s1
	lla	a0,.LC7
	call	vx_printf
	li	a2,0
	mv	a1,s1
	lla	a0,.LC8
	call	vx_printf
	lw	a2,24(sp)
	mv	a1,s1
	lla	a0,.LC9
	call	vx_printf
	lw	a5,20(sp)
	mv	a3,s7
	li	a2,0
	flw	fa5,0(a5)
	lw	a5,12(sp)
	li	a1,0
	fsw	fa5,40(sp)
	flw	fa5,0(a5)
	lw	a5,28(sp)
	lla	a0,.LC10
	fsw	fa5,44(sp)
	flw	fs5,0(a5)
	flw	fs4,4(a5)
	call	vx_printf
	beq	s7,zero,.L9
	addi	s6,sp,40
	addi	s5,sp,44
	li	s2,0
.L7:
	lw	s0,0(s6)
	fmv.s	fs6,fs0
	srli	a0,s0,26
	andi	a5,a0,31
	srli	a3,s0,31
	slli	a4,s0,16
	slli	a5,a5,1
	srli	a4,a4,16
	or	a5,a5,a3
	srli	s3,s0,16
	srli	a6,a4,10
	andi	a5,a5,1
	andi	a0,a0,31
	andi	s3,s3,1023
	srli	s10,a4,15
	andi	s9,a6,31
	andi	s0,s0,1023
	beq	a5,zero,.L3
	fmv.s	fs6,fs3
.L3:
	call	__floatsidf
	lla	a5,.LC2
	mv	a2,a0
	mv	a3,a1
	lw	a0,0(a5)
	lw	a1,4(a5)
	fmv.s	fs2,fs0
	addi	s8,s2,1
	call	pow
	call	__truncdfsf2
	fcvt.s.wu	fa5,s3
	mv	s3,s2
	fmadd.s	fa5,fa5,fs1,fs0
	fmul.s	fa0,fa0,fa5
	fmul.s	fa0,fa0,fs6
	call	__extendsfdf2
	mv	a5,a1
	mv	a4,a0
	mv	a2,s2
	mv	a1,s1
	lla	a0,.LC4
	call	vx_printf
	slli	a5,s9,1
	or	a5,s10,a5
	andi	a5,a5,1
	beq	a5,zero,.L4
	fmv.s	fs2,fs3
.L4:
	mv	a0,s9
	call	__floatsidf
	mv	a3,a1
	mv	a2,a0
	lw	a1,4(s4)
	lw	a0,0(s4)
	fmv.s	fs6,fs0
	call	pow
	call	__truncdfsf2
	fcvt.s.wu	fa5,s0
	fmadd.s	fa5,fa5,fs1,fs0
	fmul.s	fa0,fa0,fa5
	fmul.s	fa0,fa0,fs2
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	mv	a2,s8
	mv	a1,s1
	lla	a0,.LC4
	call	vx_printf
	lw	s0,0(s5)
	srli	a0,s0,26
	srli	a4,s0,16
	andi	a5,a0,31
	srli	a2,s0,31
	andi	s10,a4,1023
	slli	a5,a5,1
	slli	a6,s0,16
	slli	a3,s10,6
	or	a5,a5,a2
	srli	a6,a6,16
	or	a5,a5,a3
	srli	a7,a6,10
	andi	a5,a5,1
	andi	a0,a0,31
	srli	s9,a6,15
	andi	s11,a7,31
	andi	s0,s0,1023
	beq	a5,zero,.L5
	fmv.s	fs6,fs3
.L5:
	call	__floatsidf
	mv	a2,a0
	mv	a3,a1
	lw	a0,0(s4)
	lw	a1,4(s4)
	fmv.s	fs2,fs0
	call	pow
	call	__truncdfsf2
	fcvt.s.wu	fa5,s10
	fmadd.s	fa5,fa5,fs1,fs0
	fmul.s	fa0,fa0,fa5
	fmul.s	fa0,fa0,fs6
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	mv	a2,s2
	mv	a1,s1
	lla	a0,.LC5
	call	vx_printf
	slli	a4,s11,1
	slli	a5,s0,6
	or	a6,s9,a4
	or	a6,a6,a5
	andi	a6,a6,1
	beq	a6,zero,.L6
	fmv.s	fs2,fs3
.L6:
	mv	a0,s11
	call	__floatsidf
	mv	a2,a0
	mv	a3,a1
	lw	a0,0(s4)
	lw	a1,4(s4)
	addi	s3,s3,2
	addi	s6,s6,8
	call	pow
	call	__truncdfsf2
	fcvt.s.wu	fa5,s0
	addi	s5,s5,8
	li	s2,2
	fmadd.s	fa5,fa5,fs1,fs0
	fmul.s	fa0,fa0,fa5
	fmul.s	fa0,fa0,fs2
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	mv	a2,s8
	mv	a1,s1
	lla	a0,.LC5
	call	vx_printf
	bgt	s7,s3,.L7
	fmv.s	fa0,fs5
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	li	a2,0
	mv	a1,s1
	lla	a0,.LC6
	call	vx_printf
	fmv.s	fa0,fs4
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	li	a2,1
	mv	a1,s1
	lla	a0,.LC6
	call	vx_printf
.L9:
	addi	s7,s7,2
	j	.L2
	.size	main, .-main
	.section	.srodata.cst4,"aM",@progbits,4
	.align	2
.LC0:
	.word	-1082130432
	.align	2
.LC1:
	.word	1065353216
	.section	.srodata.cst8,"aM",@progbits,8
	.align	3
.LC2:
	.word	0
	.word	1073741824
	.section	.srodata.cst4
	.align	2
.LC3:
	.word	981467136
	.ident	"GCC: (g2ee5e430018-dirty) 12.2.0"
