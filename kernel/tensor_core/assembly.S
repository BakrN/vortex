	.file	"mat_load.cpp"
	.option nopic
	.attribute arch, "rv32i2p1_m2p0_f2p2_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.text._ZNKSt5ctypeIcE8do_widenEc,"axG",@progbits,_ZNKSt5ctypeIcE8do_widenEc,comdat
	.align	2
	.weak	_ZNKSt5ctypeIcE8do_widenEc
	.type	_ZNKSt5ctypeIcE8do_widenEc, @function
_ZNKSt5ctypeIcE8do_widenEc:
.LFB1947:
	.cfi_startproc
	mv	a0,a1
	ret
	.cfi_endproc
.LFE1947:
	.size	_ZNKSt5ctypeIcE8do_widenEc, .-_ZNKSt5ctypeIcE8do_widenEc
	.section	.rodata.str1.4,"aMS",@progbits,1
	.align	2
.LC0:
	.string	"regD = "
	.globl	__extendsfdf2
	.text
	.align	2
	.globl	_Z5tloadPfS_S_iiii
	.type	_Z5tloadPfS_S_iiii, @function
_Z5tloadPfS_S_iiii:
.LFB2194:
	.cfi_startproc
	flw	fa2,0(a1)
	flw	fa3,0(a0)
	fmv.w.x	fa5,zero
	flw	fa0,4(a1)
	flw	fa4,4(a0)
	fmadd.s	fa3,fa3,fa2,fa5
	flw	fa1,8(a1)
	flw	fa5,8(a0)
	addi	sp,sp,-32 // for regD
	.cfi_def_cfa_offset 32
	flw	fa2,12(a1)
	fmadd.s	fa4,fa4,fa0,fa3
	fsw	fs0,12(sp)
	.cfi_offset 40, -20
	flw	fs0,12(a0)
	sw	s0,24(sp)
	lui	a1,%hi(.LC0)
	fmadd.s	fa5,fa5,fa1,fa4
	.cfi_offset 8, -8
	lui	s0,%hi(_ZSt4cout)
	li	a2,7
	addi	a1,a1,%lo(.LC0)
	addi	a0,s0,%lo(_ZSt4cout)
	fmadd.s	fs0,fs0,fa2,fa5
	sw	ra,28(sp)
	sw	s1,20(sp)
	.cfi_offset 1, -4
	.cfi_offset 9, -12
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_i
	fmv.s	fa0,fs0
	call	__extendsfdf2
	mv	a2,a1
	mv	a1,a0
	addi	a0,s0,%lo(_ZSt4cout)
	call	_ZNSo9_M_insertIdEERSoT_
	lw	a5,0(a0)
	lw	a5,-12(a5)
	add	a5,a0,a5
	lw	s1,124(a5)
	beq	s1,zero,.L9
	lbu	a5,28(s1)
	mv	s0,a0
	beq	a5,zero,.L5
	lbu	a1,39(s1)
.L6:
	mv	a0,s0
	call	_ZNSo3putEc
	lw	s0,24(sp)
	.cfi_remember_state
	.cfi_restore 8
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s1,20(sp)
	.cfi_restore 9
	flw	fs0,12(sp)
	.cfi_restore 40
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	tail	_ZNSo5flushEv
.L5:
	.cfi_restore_state
	mv	a0,s1
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	lw	a4,0(s1)
	lui	a5,%hi(_ZNKSt5ctypeIcE8do_widenEc)
	addi	a5,a5,%lo(_ZNKSt5ctypeIcE8do_widenEc)
	lw	a4,24(a4)
	li	a1,10
	beq	a4,a5,.L6
	mv	a0,s1
	jalr	a4
	mv	a1,a0
	j	.L6
.L9:
	call	_ZSt16__throw_bad_castv
	.cfi_endproc
.LFE2194:
	.size	_Z5tloadPfS_S_iiii, .-_Z5tloadPfS_S_iiii
	.section	.text.startup,"ax",@progbits
	.align	2
	.type	_GLOBAL__sub_I__Z5tloadPfS_S_iiii, @function
_GLOBAL__sub_I__Z5tloadPfS_S_iiii:
.LFB2900:
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	s0,8(sp)
	.cfi_offset 8, -8
	lui	s0,%hi(_ZStL8__ioinit)
	addi	a0,s0,%lo(_ZStL8__ioinit)
	sw	ra,12(sp)
	.cfi_offset 1, -4
	call	_ZNSt8ios_base4InitC1Ev
	addi	a1,s0,%lo(_ZStL8__ioinit)
	lw	s0,8(sp)
	.cfi_restore 8
	lw	ra,12(sp)
	.cfi_restore 1
	lui	a2,%hi(__dso_handle)
	lui	a0,%hi(_ZNSt8ios_base4InitD1Ev)
	addi	a2,a2,%lo(__dso_handle)
	addi	a0,a0,%lo(_ZNSt8ios_base4InitD1Ev)
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	tail	__cxa_atexit
	.cfi_endproc
.LFE2900:
	.size	_GLOBAL__sub_I__Z5tloadPfS_S_iiii, .-_GLOBAL__sub_I__Z5tloadPfS_S_iiii
	.section	.init_array,"aw"
	.align	2
	.word	_GLOBAL__sub_I__Z5tloadPfS_S_iiii
	.section	.sbss,"aw",@nobits
	.align	2
	.type	_ZStL8__ioinit, @object
	.size	_ZStL8__ioinit, 1
_ZStL8__ioinit:
	.zero	1
	.hidden	__dso_handle
	.ident	"GCC: (g2ee5e430018-dirty) 12.2.0"
