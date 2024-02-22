	.file	"mat_load.cpp"
	.option nopic
	.attribute arch, "rv32i2p1_m2p0_f2p2_zicsr2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.type	_ZL20__gthread_key_deletei, @function
_ZL20__gthread_key_deletei:
.LFB1001:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	s0,28(sp)
	.cfi_offset 8, -4
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	li	a5,0
	mv	a0,a5
	lw	s0,28(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE1001:
	.size	_ZL20__gthread_key_deletei, .-_ZL20__gthread_key_deletei
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,4
	.section	.rodata
	.align	2
.LC2:
	.string	"#########################"
	.align	2
.LC3:
	.string	"Now accessing thread id: "
	.align	2
.LC0:
	.half	1
	.half	2
	.half	3
	.half	4
	.half	5
	.half	6
	.half	7
	.half	8
	.half	9
	.half	10
	.half	11
	.half	12
	.half	13
	.half	14
	.half	15
	.half	16
	.align	2
.LC1:
	.word	1065353216
	.word	1073741824
	.word	1077936128
	.word	1082130432
	.word	1084227584
	.word	1086324736
	.word	1088421888
	.word	1090519040
	.word	1091567616
	.word	1092616192
	.word	1093664768
	.word	1094713344
	.word	1095761920
	.word	1096810496
	.word	1097859072
	.word	1098907648
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
.LFB2194:
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sw	ra,156(sp)
	sw	s0,152(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	lui	a5,%hi(.LC0)
	addi	a5,a5,%lo(.LC0)
	lw	a7,0(a5)
	lw	a6,4(a5)
	lw	a0,8(a5)
	lw	a1,12(a5)
	lw	a2,16(a5)
	lw	a3,20(a5)
	lw	a4,24(a5)
	lw	a5,28(a5)
	sw	a7,-64(s0)
	sw	a6,-60(s0)
	sw	a0,-56(s0)
	sw	a1,-52(s0)
	sw	a2,-48(s0)
	sw	a3,-44(s0)
	sw	a4,-40(s0)
	sw	a5,-36(s0)
	lui	a5,%hi(.LC0)
	addi	a5,a5,%lo(.LC0)
	lw	a7,0(a5)
	lw	a6,4(a5)
	lw	a0,8(a5)
	lw	a1,12(a5)
	lw	a2,16(a5)
	lw	a3,20(a5)
	lw	a4,24(a5)
	lw	a5,28(a5)
	sw	a7,-96(s0)
	sw	a6,-92(s0)
	sw	a0,-88(s0)
	sw	a1,-84(s0)
	sw	a2,-80(s0)
	sw	a3,-76(s0)
	sw	a4,-72(s0)
	sw	a5,-68(s0)
	lui	a5,%hi(.LC1)
	addi	a4,a5,%lo(.LC1)
	addi	a5,s0,-160
	mv	a3,a4
	li	a4,64
	mv	a2,a4
	mv	a1,a3
	mv	a0,a5
	call	memcpy
	addi	a5,s0,-64
	sw	a5,-24(s0)
	addi	a5,s0,-96
	sw	a5,-28(s0)
	addi	a5,s0,-160
	sw	a5,-32(s0)
	sw	zero,-20(s0)
	j	.L4
.L5:
	lui	a5,%hi(.LC2)
	addi	a1,a5,%lo(.LC2)
	lui	a5,%hi(_ZSt4cout)
	addi	a0,a5,%lo(_ZSt4cout)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mv	a4,a0
	lui	a5,%hi(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	addi	a1,a5,%lo(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	mv	a0,a4
	call	_ZNSolsEPFRSoS_E
	lui	a5,%hi(.LC3)
	addi	a1,a5,%lo(.LC3)
	lui	a5,%hi(_ZSt4cout)
	addi	a0,a5,%lo(_ZSt4cout)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mv	a5,a0
	lw	a1,-20(s0)
	mv	a0,a5
	call	_ZNSolsEi
	mv	a4,a0
	lui	a5,%hi(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	addi	a1,a5,%lo(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	mv	a0,a4
	call	_ZNSolsEPFRSoS_E
	lw	a5,-20(s0)
	mv	a6,a5
	li	a5,4
	li	a4,2
	li	a3,2
	lw	a2,-32(s0)
	lw	a1,-28(s0)
	lw	a0,-24(s0)
	call	_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj
	lui	a5,%hi(.LC2)
	addi	a1,a5,%lo(.LC2)
	lui	a5,%hi(_ZSt4cout)
	addi	a0,a5,%lo(_ZSt4cout)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	mv	a4,a0
	lui	a5,%hi(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	addi	a1,a5,%lo(_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_)
	mv	a0,a4
	call	_ZNSolsEPFRSoS_E
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L4:
	lw	a4,-20(s0)
	li	a5,7
	ble	a4,a5,.L5
	li	a5,0
	mv	a0,a5
	lw	ra,156(sp)
	.cfi_restore 1
	lw	s0,152(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2194:
	.size	main, .-main
	.section	.rodata
	.align	2
.LC4:
	.string	"row_thread = %d\n"
	.align	2
.LC5:
	.string	"col_thread = %d\n"
	.align	2
.LC6:
	.string	"row_group = %d\n"
	.align	2
.LC7:
	.string	"col_group = %d\n"
	.align	2
.LC8:
	.string	"pe_group_id = %d\n"
	.align	2
.LC9:
	.string	"thread_id = %d\n"
	.align	2
.LC10:
	.string	"A offset: %d\n"
	.align	2
.LC11:
	.string	"regA[%d] = %d\n"
	.align	2
.LC12:
	.string	"regB[%d] = %d\n"
	.globl	__extendsfdf2
	.align	2
.LC13:
	.string	"regC[%d] = %f\n"
	.section	.text._Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj,"axG",@progbits,_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj,comdat
	.align	2
	.weak	_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj
	.type	_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj, @function
_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj:
.LFB2512:
	.cfi_startproc
	addi	sp,sp,-160
	.cfi_def_cfa_offset 160
	sw	ra,156(sp)
	sw	s0,152(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,160
	.cfi_def_cfa 8, 0
	sw	a0,-132(s0)
	sw	a1,-136(s0)
	sw	a2,-140(s0)
	sw	a3,-144(s0)
	sw	a4,-148(s0)
	sw	a5,-152(s0)
	sw	a6,-156(s0)
	li	a5,2
	sw	a5,-32(s0)
	lw	a5,-156(s0)
	sw	a5,-36(s0)
	lw	a5,-36(s0)
	srli	a5,a5,1
	sw	a5,-40(s0)
	lw	a4,-40(s0)
	srai	a5,a4,31
	srli	a5,a5,31
	add	a4,a4,a5
	andi	a4,a4,1
	sub	a5,a4,a5
	sw	a5,-44(s0)
	lw	a4,-40(s0)
	lw	a5,-44(s0)
	sub	a5,a4,a5
	srli	a4,a5,31
	add	a5,a4,a5
	srai	a5,a5,1
	sw	a5,-48(s0)
	lw	a5,-48(s0)
	slli	a4,a5,1
	lw	a5,-36(s0)
	andi	a5,a5,1
	add	a5,a4,a5
	lw	a4,-144(s0)
	mul	a5,a4,a5
	sw	a5,-52(s0)
	lw	a4,-44(s0)
	lw	a5,-148(s0)
	mul	a5,a4,a5
	slli	a5,a5,1
	sw	a5,-56(s0)
	lw	a5,-52(s0)
	srli	a5,a5,1
	slli	a5,a5,2
	lw	a4,-132(s0)
	add	a5,a4,a5
	sw	a5,-60(s0)
	lw	a1,-52(s0)
	lui	a5,%hi(.LC4)
	addi	a0,a5,%lo(.LC4)
	call	printf
	lw	a1,-56(s0)
	lui	a5,%hi(.LC5)
	addi	a0,a5,%lo(.LC5)
	call	printf
	lw	a1,-48(s0)
	lui	a5,%hi(.LC6)
	addi	a0,a5,%lo(.LC6)
	call	printf
	lw	a1,-44(s0)
	lui	a5,%hi(.LC7)
	addi	a0,a5,%lo(.LC7)
	call	printf
	lw	a1,-40(s0)
	lui	a5,%hi(.LC8)
	addi	a0,a5,%lo(.LC8)
	call	printf
	lw	a1,-36(s0)
	lui	a5,%hi(.LC9)
	addi	a0,a5,%lo(.LC9)
	call	printf
	lw	a4,-60(s0)
	lw	a5,-132(s0)
	sub	a5,a4,a5
	srai	a5,a5,2
	mv	a1,a5
	lui	a5,%hi(.LC10)
	addi	a0,a5,%lo(.LC10)
	call	printf
	lw	a4,-144(s0)
	addi	a5,s0,-92
	mv	a2,a4
	mv	a1,a5
	lw	a0,-60(s0)
	call	_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i
	lw	a5,-56(s0)
	srli	a5,a5,1
	slli	a5,a5,2
	lw	a4,-136(s0)
	add	a5,a4,a5
	sw	a5,-64(s0)
	lw	a4,-148(s0)
	addi	a5,s0,-100
	mv	a2,a4
	mv	a1,a5
	lw	a0,-64(s0)
	call	_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i
	lw	a5,-48(s0)
	slli	a4,a5,1
	lw	a5,-36(s0)
	andi	a5,a5,1
	add	a5,a4,a5
	lw	a4,-152(s0)
	mul	a5,a4,a5
	sw	a5,-68(s0)
	lw	a5,-44(s0)
	slli	a5,a5,1
	sw	a5,-72(s0)
	lw	a4,-68(s0)
	lw	a5,-72(s0)
	add	a5,a4,a5
	slli	a5,a5,2
	lw	a4,-140(s0)
	add	a5,a4,a5
	sw	a5,-76(s0)
	lw	a4,-152(s0)
	addi	a5,s0,-116
	mv	a2,a4
	mv	a1,a5
	lw	a0,-76(s0)
	call	_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i
	addi	a5,s0,-92
	sw	a5,-80(s0)
	sw	zero,-20(s0)
	j	.L8
.L9:
	lw	a5,-20(s0)
	slli	a5,a5,1
	lw	a4,-80(s0)
	add	a5,a4,a5
	lhu	a5,0(a5)
	mv	a2,a5
	lw	a1,-20(s0)
	lui	a5,%hi(.LC11)
	addi	a0,a5,%lo(.LC11)
	call	printf
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L8:
	lw	a4,-20(s0)
	li	a5,3
	bleu	a4,a5,.L9
	addi	a5,s0,-100
	sw	a5,-84(s0)
	sw	zero,-24(s0)
	j	.L10
.L11:
	lw	a5,-24(s0)
	slli	a5,a5,1
	lw	a4,-84(s0)
	add	a5,a4,a5
	lhu	a5,0(a5)
	mv	a2,a5
	lw	a1,-24(s0)
	lui	a5,%hi(.LC12)
	addi	a0,a5,%lo(.LC12)
	call	printf
	lw	a5,-24(s0)
	addi	a5,a5,1
	sw	a5,-24(s0)
.L10:
	lw	a4,-24(s0)
	li	a5,3
	bleu	a4,a5,.L11
	sw	zero,-28(s0)
	j	.L12
.L13:
	lw	a5,-28(s0)
	slli	a5,a5,2
	addi	a5,a5,-16
	add	a5,a5,s0
	flw	fa5,-100(a5)
	fmv.s	fa0,fa5
	call	__extendsfdf2
	mv	a4,a0
	mv	a5,a1
	mv	a2,a4
	mv	a3,a5
	lw	a1,-28(s0)
	lui	a5,%hi(.LC13)
	addi	a0,a5,%lo(.LC13)
	call	printf
	lw	a5,-28(s0)
	addi	a5,a5,1
	sw	a5,-28(s0)
.L12:
	lw	a4,-28(s0)
	li	a5,1
	bleu	a4,a5,.L13
	nop
	nop
	lw	ra,156(sp)
	.cfi_restore 1
	lw	s0,152(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 160
	addi	sp,sp,160
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2512:
	.size	_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj, .-_Z7tc_loadItfLj4ELj4ELj4ELj2ELj2ELj2EL8layout_t0ELS0_1ELS0_0EEvPT0_S2_S2_jjjj
	.section	.text._Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i
	.type	_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i, @function
_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i:
.LFB2672:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-20(s0)
	flw	fa5,0(a5)
	lw	a5,-24(s0)
	fsw	fa5,0(a5)
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	call	_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2672:
	.size	_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i, .-_Z27unrolled_load_row_row_majorILi0ELi0ELi2ELi1EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i
	.type	_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i, @function
_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i:
.LFB2673:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-20(s0)
	flw	fa5,0(a5)
	lw	a5,-24(s0)
	fsw	fa5,0(a5)
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	call	_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2673:
	.size	_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i, .-_Z27unrolled_load_col_row_majorILi0ELi0ELi1ELi2EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i
	.type	_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i, @function
_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i:
.LFB2773:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-24(s0)
	addi	a5,a5,4
	lw	a4,-20(s0)
	flw	fa5,4(a4)
	fsw	fa5,0(a5)
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	call	_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2773:
	.size	_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i, .-_Z27unrolled_load_row_row_majorILi0ELi1ELi2ELi1EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i
	.type	_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i, @function
_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i:
.LFB2774:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-20(s0)
	addi	a5,a5,4
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	mv	a0,a5
	call	_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2774:
	.size	_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i, .-_Z27unrolled_load_col_row_majorILi0ELi1ELi1ELi2EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i
	.type	_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i, @function
_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i:
.LFB2845:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-28(s0)
	slli	a5,a5,2
	lw	a4,-20(s0)
	add	a5,a4,a5
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	mv	a0,a5
	call	_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2845:
	.size	_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i, .-_Z27unrolled_load_row_row_majorILi0ELi2ELi2ELi1EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i
	.type	_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i, @function
_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i:
.LFB2846:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-24(s0)
	addi	a5,a5,4
	lw	a4,-20(s0)
	flw	fa5,0(a4)
	fsw	fa5,0(a5)
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	call	_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2846:
	.size	_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i, .-_Z27unrolled_load_col_row_majorILi1ELi0ELi1ELi2EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i
	.type	_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i, @function
_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i:
.LFB2870:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	s0,28(sp)
	.cfi_offset 8, -4
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	nop
	lw	s0,28(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2870:
	.size	_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i, .-_Z27unrolled_load_row_row_majorILi1ELi0ELi2ELi1EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i
	.type	_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i, @function
_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i:
.LFB2871:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	lw	a5,-20(s0)
	addi	a5,a5,4
	lw	a2,-28(s0)
	lw	a1,-24(s0)
	mv	a0,a5
	call	_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2871:
	.size	_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i, .-_Z27unrolled_load_col_row_majorILi1ELi1ELi1ELi2EfEvPT3_S1_i
	.section	.text._Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i,"axG",@progbits,_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i,comdat
	.align	2
	.weak	_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i
	.type	_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i, @function
_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i:
.LFB2883:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	s0,28(sp)
	.cfi_offset 8, -4
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	sw	a2,-28(s0)
	nop
	lw	s0,28(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2883:
	.size	_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i, .-_Z27unrolled_load_col_row_majorILi2ELi0ELi1ELi2EfEvPT3_S1_i
	.text
	.align	2
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB2888:
	.cfi_startproc
	addi	sp,sp,-32
	.cfi_def_cfa_offset 32
	sw	ra,28(sp)
	sw	s0,24(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,32
	.cfi_def_cfa 8, 0
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	lw	a4,-20(s0)
	li	a5,1
	bne	a4,a5,.L25
	lw	a4,-24(s0)
	li	a5,65536
	addi	a5,a5,-1
	bne	a4,a5,.L25
	lui	a5,%hi(_ZStL8__ioinit)
	addi	a0,a5,%lo(_ZStL8__ioinit)
	call	_ZNSt8ios_base4InitC1Ev
	lui	a5,%hi(__dso_handle)
	addi	a2,a5,%lo(__dso_handle)
	lui	a5,%hi(_ZStL8__ioinit)
	addi	a1,a5,%lo(_ZStL8__ioinit)
	lui	a5,%hi(_ZNSt8ios_base4InitD1Ev)
	addi	a0,a5,%lo(_ZNSt8ios_base4InitD1Ev)
	call	__cxa_atexit
.L25:
	nop
	lw	ra,28(sp)
	.cfi_restore 1
	lw	s0,24(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 32
	addi	sp,sp,32
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2888:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.align	2
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB2889:
	.cfi_startproc
	addi	sp,sp,-16
	.cfi_def_cfa_offset 16
	sw	ra,12(sp)
	sw	s0,8(sp)
	.cfi_offset 1, -4
	.cfi_offset 8, -8
	addi	s0,sp,16
	.cfi_def_cfa 8, 0
	li	a5,65536
	addi	a1,a5,-1
	li	a0,1
	call	_Z41__static_initialization_and_destruction_0ii
	lw	ra,12(sp)
	.cfi_restore 1
	lw	s0,8(sp)
	.cfi_restore 8
	.cfi_def_cfa 2, 16
	addi	sp,sp,16
	.cfi_def_cfa_offset 0
	jr	ra
	.cfi_endproc
.LFE2889:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align	2
	.word	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (g2ee5e430018-dirty) 12.2.0"
