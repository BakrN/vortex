	.text
	.attribute	4, 16
	.attribute	5, "rv32i2p0_m2p0_a2p0_f2p0"
	.file	"kernel.cpp"
	.section	.text.main,"ax",@progbits
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   # @main
# %bb.0:
	addi	sp, sp, -224
	sw	ra, 220(sp)                     # 4-byte Folded Spill
	sw	s0, 216(sp)                     # 4-byte Folded Spill
	sw	s1, 212(sp)                     # 4-byte Folded Spill
	sw	s2, 208(sp)                     # 4-byte Folded Spill
	sw	s3, 204(sp)                     # 4-byte Folded Spill
	sw	s4, 200(sp)                     # 4-byte Folded Spill
	sw	s5, 196(sp)                     # 4-byte Folded Spill
	sw	s6, 192(sp)                     # 4-byte Folded Spill
	sw	s7, 188(sp)                     # 4-byte Folded Spill
	sw	s8, 184(sp)                     # 4-byte Folded Spill
	sw	s9, 180(sp)                     # 4-byte Folded Spill
	sw	s10, 176(sp)                    # 4-byte Folded Spill
	sw	s11, 172(sp)                    # 4-byte Folded Spill
	fsw	fs0, 168(sp)                    # 4-byte Folded Spill
	fsw	fs1, 164(sp)                    # 4-byte Folded Spill
	fsw	fs2, 160(sp)                    # 4-byte Folded Spill
	fsw	fs3, 156(sp)                    # 4-byte Folded Spill
	fsw	fs4, 152(sp)                    # 4-byte Folded Spill
	fsw	fs5, 148(sp)                    # 4-byte Folded Spill
	fsw	fs6, 144(sp)                    # 4-byte Folded Spill
	fsw	fs7, 140(sp)                    # 4-byte Folded Spill
	fsw	fs8, 136(sp)                    # 4-byte Folded Spill
	fsw	fs9, 132(sp)                    # 4-byte Folded Spill
	fsw	fs10, 128(sp)                   # 4-byte Folded Spill
	fsw	fs11, 124(sp)                   # 4-byte Folded Spill
	li	a0, -1
	#APP
	.insn r 11, 0, 0, zero, a0, zero
	#NO_APP
	#APP
	csrr	s0, tid
	#NO_APP
	#APP
	csrr	a0, wid
	#NO_APP
	#APP
	csrr	a0, cid
	#NO_APP
	lui	a0, 524287
	lw	a3, 32(a0)
	blez	a3, .LBB0_54
# %bb.1:
	sw	zero, 68(sp)                    # 4-byte Folded Spill
	lw	a1, 0(a0)
	sw	a1, 12(sp)                      # 4-byte Folded Spill
	lw	a1, 4(a0)
	sw	a1, 28(sp)                      # 4-byte Folded Spill
	lw	a1, 8(a0)
	lw	a2, 12(a0)
	sw	a2, 8(sp)                       # 4-byte Folded Spill
	lw	a4, 36(a0)
	lw	a5, 40(a0)
	srai	a0, s0, 31
	srli	a0, a0, 30
	add	a0, s0, a0
	srai	a0, a0, 2
	sw	a0, 60(sp)                      # 4-byte Folded Spill
	mul	a0, a5, s0
	srli	a2, a0, 31
	add	a0, a0, a2
	srai	a0, a0, 1
	mul	a2, a3, s0
	slli	a2, a2, 2
	add	a1, a1, a2
	sw	a1, 20(sp)                      # 4-byte Folded Spill
	fmv.w.x	fs0, zero
.Lpcrel_hi0:
	auipc	a1, %pcrel_hi(.L.str.4)
	addi	a1, a1, %pcrel_lo(.Lpcrel_hi0)
	sw	a1, 56(sp)                      # 4-byte Folded Spill
.Lpcrel_hi1:
	auipc	a1, %pcrel_hi(.L.str.5)
	addi	a1, a1, %pcrel_lo(.Lpcrel_hi1)
	sw	a1, 52(sp)                      # 4-byte Folded Spill
.Lpcrel_hi2:
	auipc	a1, %pcrel_hi(.L.str.6)
	addi	a1, a1, %pcrel_lo(.Lpcrel_hi2)
	sw	a1, 48(sp)                      # 4-byte Folded Spill
	slli	a0, a0, 2
	sw	a0, 44(sp)                      # 4-byte Folded Spill
.Lpcrel_hi3:
	auipc	a0, %pcrel_hi(.L.str)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi3)
	sw	a0, 40(sp)                      # 4-byte Folded Spill
	addi	s2, sp, 108
	li	s3, 30
	lui	s4, 524288
	lui	s5, 1046528
	addi	s6, sp, 92
	li	s1, 6
	lui	s11, 522240
	fmv.s	fs3, fs0
	fmv.s	fs2, fs0
	fmv.s	fs1, fs0
	sw	a3, 16(sp)                      # 4-byte Folded Spill
	sw	a4, 24(sp)                      # 4-byte Folded Spill
	sw	a5, 64(sp)                      # 4-byte Folded Spill
	j	.LBB0_4
.LBB0_2:                                #   in Loop: Header=BB0_4 Depth=1
	lw	a3, 16(sp)                      # 4-byte Folded Reload
.LBB0_3:                                #   in Loop: Header=BB0_4 Depth=1
	lw	a0, 68(sp)                      # 4-byte Folded Reload
	addi	a0, a0, 4
	sw	a0, 68(sp)                      # 4-byte Folded Spill
	bge	a0, a3, .LBB0_54
.LBB0_4:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_8 Depth 2
                                        #       Child Loop BB0_11 Depth 3
                                        #         Child Loop BB0_14 Depth 4
                                        #           Child Loop BB0_20 Depth 5
                                        #           Child Loop BB0_31 Depth 5
                                        #           Child Loop BB0_42 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	blez	a4, .LBB0_3
# %bb.5:                                #   in Loop: Header=BB0_4 Depth=1
	li	s7, 0
	lw	a1, 68(sp)                      # 4-byte Folded Reload
	mul	a0, a1, a5
	slli	a0, a0, 1
	lw	a2, 12(sp)                      # 4-byte Folded Reload
	add	s8, a2, a0
	mul	a0, a1, a4
	slli	a0, a0, 2
	lw	a1, 8(sp)                       # 4-byte Folded Reload
	add	a0, a1, a0
	sw	a0, 32(sp)                      # 4-byte Folded Spill
	j	.LBB0_8
.LBB0_6:                                #   in Loop: Header=BB0_8 Depth=2
	lw	a4, 24(sp)                      # 4-byte Folded Reload
	lw	a2, 36(sp)                      # 4-byte Folded Reload
.LBB0_7:                                #   in Loop: Header=BB0_8 Depth=2
	lw	a0, 32(sp)                      # 4-byte Folded Reload
	add	a0, a0, a2
	fsw	fs1, 0(a0)
	fsw	fs2, 4(a0)
	fsw	fs3, 8(a0)
	addi	s7, s7, 4
	fsw	fs0, 12(a0)
	bge	s7, a4, .LBB0_2
.LBB0_8:                                #   Parent Loop BB0_4 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_11 Depth 3
                                        #         Child Loop BB0_14 Depth 4
                                        #           Child Loop BB0_20 Depth 5
                                        #           Child Loop BB0_31 Depth 5
                                        #           Child Loop BB0_42 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	slli	a2, s7, 2
	blez	a5, .LBB0_7
# %bb.9:                                #   in Loop: Header=BB0_8 Depth=2
	li	s9, 0
	mul	a0, s7, a5
	slli	a0, a0, 1
	lw	a1, 28(sp)                      # 4-byte Folded Reload
	add	s10, a1, a0
	lw	a0, 20(sp)                      # 4-byte Folded Reload
	sw	a2, 36(sp)                      # 4-byte Folded Spill
	add	a0, a0, a2
	sw	a0, 72(sp)                      # 4-byte Folded Spill
	sw	s7, 76(sp)                      # 4-byte Folded Spill
	j	.LBB0_11
.LBB0_10:                               #   in Loop: Header=BB0_11 Depth=3
	fmv.s	fa0, fs1
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi8:
	auipc	a0, %pcrel_hi(.L.str.3)
	addi	s9, a0, %pcrel_lo(.Lpcrel_hi8)
	mv	a0, s9
	mv	a1, s0
	li	a2, 0
	call	vx_printf
	fmv.s	fa0, fs2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 1
	mv	a0, s9
	mv	a1, s0
	call	vx_printf
	fmv.s	fa0, fs3
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 2
	mv	a0, s9
	mv	a1, s0
	call	vx_printf
	fmv.s	fa0, fs0
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 3
	mv	a0, s9
	mv	a1, s0
	call	vx_printf
	li	a2, 4
	mv	a0, s9
	mv	a1, s0
	li	a4, 0
	li	a5, 0
	call	vx_printf
	li	a2, 5
	mv	a0, s9
	mv	a1, s0
	li	a4, 0
	li	a5, 0
	call	vx_printf
	li	a2, 6
	mv	a0, s9
	mv	a1, s0
	li	a4, 0
	li	a5, 0
	call	vx_printf
	li	a2, 7
	mv	a0, s9
	mv	a1, s0
	li	a4, 0
	li	a5, 0
	call	vx_printf
	#APP
	.insn r4 123, 1, 0, ft0, fs7, fs11, fs1
	#NO_APP
	#APP
	.insn r4 123, 1, 0, ft0, fs6, fs10, fs2
	#NO_APP
	#APP
	.insn r4 123, 1, 0, ft0, fs5, fs9, fs3
	#NO_APP
	#APP
	.insn r4 123, 1, 0, ft0, fs4, fs8, fs0
	#NO_APP
	lw	s8, 88(sp)                      # 4-byte Folded Reload
	addi	s8, s8, 32
	lw	s9, 84(sp)                      # 4-byte Folded Reload
	addi	s9, s9, 8
	lw	s10, 80(sp)                     # 4-byte Folded Reload
	addi	s10, s10, 32
	lw	a5, 64(sp)                      # 4-byte Folded Reload
	lw	s7, 76(sp)                      # 4-byte Folded Reload
	bge	s9, a5, .LBB0_6
.LBB0_11:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        # =>    This Loop Header: Depth=3
                                        #         Child Loop BB0_14 Depth 4
                                        #           Child Loop BB0_20 Depth 5
                                        #           Child Loop BB0_31 Depth 5
                                        #           Child Loop BB0_42 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	lw	a0, 56(sp)                      # 4-byte Folded Reload
	mv	a1, s0
	mv	a2, s0
	call	vx_printf
	lw	a0, 52(sp)                      # 4-byte Folded Reload
	mv	a1, s0
	lw	a2, 60(sp)                      # 4-byte Folded Reload
	call	vx_printf
	lw	a0, 48(sp)                      # 4-byte Folded Reload
	mv	a1, s0
	li	a2, 0
	call	vx_printf
	lw	a0, 44(sp)                      # 4-byte Folded Reload
	sw	s8, 88(sp)                      # 4-byte Folded Spill
	add	a0, s8, a0
	flw	fs7, 0(a0)
	fsw	fs7, 108(sp)
	flw	fs6, 4(a0)
	fsw	fs6, 112(sp)
	flw	fs5, 8(a0)
	fsw	fs5, 116(sp)
	flw	fs4, 12(a0)
	fsw	fs4, 120(sp)
	flw	fs11, 0(s10)
	fsw	fs11, 92(sp)
	flw	fs10, 4(s10)
	fsw	fs10, 96(sp)
	flw	fs9, 8(s10)
	fsw	fs9, 100(sp)
	sw	s10, 80(sp)                     # 4-byte Folded Spill
	flw	fs8, 12(s10)
	fsw	fs8, 104(sp)
	lw	a0, 72(sp)                      # 4-byte Folded Reload
	flw	fs1, 0(a0)
	flw	fs2, 4(a0)
	flw	fs3, 8(a0)
	flw	fs0, 12(a0)
	lw	a0, 40(sp)                      # 4-byte Folded Reload
	lw	a1, 68(sp)                      # 4-byte Folded Reload
	mv	a2, s7
	sw	s9, 84(sp)                      # 4-byte Folded Spill
	mv	a3, s9
	call	vx_printf
	li	a0, 0
	j	.LBB0_14
.LBB0_12:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a0, a0, 31
	slli	a1, a1, 13
	or	a1, a1, s11
	or	a0, a0, a1
.LBB0_13:                               #   in Loop: Header=BB0_14 Depth=4
	fmv.w.x	fa0, a0
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi7:
	auipc	a0, %pcrel_hi(.L.str.2)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi7)
	mv	a1, s0
	mv	a2, s10
	call	vx_printf
	addi	a0, s9, 2
	bgeu	s9, s1, .LBB0_10
.LBB0_14:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        #       Parent Loop BB0_11 Depth=3
                                        # =>      This Loop Header: Depth=4
                                        #           Child Loop BB0_20 Depth 5
                                        #           Child Loop BB0_31 Depth 5
                                        #           Child Loop BB0_42 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	mv	s9, a0
	slli	s8, a0, 2
	add	a0, s2, s8
	lw	s10, 0(a0)
	srli	a3, s10, 16
	slli	a4, s10, 1
	srli	a4, a4, 27
	andi	a2, a3, 1023
	slti	a0, a4, 31
	vx_split	a0, a0
	blt	s3, a4, .LBB0_17
# %bb.15:                               #   in Loop: Header=BB0_14 Depth=4
	seqz	a1, a4
	vx_split	a1, a1
	beqz	a4, .LBB0_18
# %bb.16:                               #   in Loop: Header=BB0_14 Depth=4
	and	a3, s10, s4
	addi	a4, a4, 112
	slli	a4, a4, 23
	slli	a2, a2, 13
	or	a2, a3, a2
	or	a2, a4, a2
	j	.LBB0_24
.LBB0_17:                               #   in Loop: Header=BB0_14 Depth=4
	and	a1, s10, s4
	slli	a3, a3, 13
	or	a2, a1, s11
	or	a2, a3, a2
	j	.LBB0_25
.LBB0_18:                               #   in Loop: Header=BB0_14 Depth=4
	andi	a4, a3, 1023
	seqz	a3, a4
	vx_split	a3, a3
	beqz	a4, .LBB0_22
# %bb.19:                               #   in Loop: Header=BB0_14 Depth=4
	lui	a4, 231424
	csrr	a5, tmask
.LBB0_20:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        #       Parent Loop BB0_11 Depth=3
                                        #         Parent Loop BB0_14 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a6, a2
	slli	a2, a2, 1
	andi	a7, a6, 512
	seqz	t0, a7
	add	a4, a4, s5
	vx_pred	t0, a5
	beqz	a7, .LBB0_20
# %bb.21:                               #   in Loop: Header=BB0_14 Depth=4
	and	a2, s10, s4
	slli	a6, a6, 23
	srli	a5, a6, 9
	or	a2, a2, a4
	or	a2, a5, a2
	j	.LBB0_23
.LBB0_22:                               #   in Loop: Header=BB0_14 Depth=4
	and	a2, s10, s4
.LBB0_23:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a3
.LBB0_24:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a1
.LBB0_25:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a0
	slli	a0, s10, 17
	srli	s7, a0, 27
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi4:
	auipc	a0, %pcrel_hi(.L.str.1)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi4)
	mv	a1, s0
	mv	a2, s9
	call	vx_printf
	slli	a2, s10, 16
	srli	a2, a2, 31
	andi	a3, s10, 1023
	slti	a0, s7, 31
	vx_split	a0, a0
	blt	s3, s7, .LBB0_28
# %bb.26:                               #   in Loop: Header=BB0_14 Depth=4
	seqz	a1, s7
	vx_split	a1, a1
	beqz	s7, .LBB0_29
# %bb.27:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a2, a2, 31
	addi	a4, s7, 112
	slli	a4, a4, 23
	slli	a3, a3, 13
	or	a2, a2, a3
	or	a2, a4, a2
	j	.LBB0_35
.LBB0_28:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a2, a2, 31
	slli	a3, a3, 13
	or	a1, a3, s11
	or	a2, a2, a1
	j	.LBB0_36
.LBB0_29:                               #   in Loop: Header=BB0_14 Depth=4
	andi	a5, s10, 1023
	seqz	a4, a5
	vx_split	a4, a4
	beqz	a5, .LBB0_33
# %bb.30:                               #   in Loop: Header=BB0_14 Depth=4
	lui	a5, 231424
	csrr	a6, tmask
.LBB0_31:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        #       Parent Loop BB0_11 Depth=3
                                        #         Parent Loop BB0_14 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a7, a3
	slli	a3, a3, 1
	andi	t0, a7, 512
	seqz	t1, t0
	add	a5, a5, s5
	vx_pred	t1, a6
	beqz	t0, .LBB0_31
# %bb.32:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a2, a2, 31
	slli	a7, a7, 23
	srli	a3, a7, 9
	or	a2, a2, a5
	or	a2, a3, a2
	j	.LBB0_34
.LBB0_33:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a2, a2, 31
.LBB0_34:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a4
.LBB0_35:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a1
.LBB0_36:                               #   in Loop: Header=BB0_14 Depth=4
	vx_join	a0
	ori	s10, s9, 1
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi5:
	auipc	a0, %pcrel_hi(.L.str.1)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi5)
	mv	a1, s0
	mv	a2, s10
	call	vx_printf
	add	s8, s6, s8
	lw	s8, 0(s8)
	srli	a1, s8, 16
	slli	a2, s8, 1
	srli	a2, a2, 27
	andi	a0, a1, 1023
	blt	s3, a2, .LBB0_39
# %bb.37:                               #   in Loop: Header=BB0_14 Depth=4
	beqz	a2, .LBB0_40
# %bb.38:                               #   in Loop: Header=BB0_14 Depth=4
	and	a1, s8, s4
	addi	a2, a2, 112
	slli	a2, a2, 23
	slli	a0, a0, 13
	or	a0, a1, a0
	j	.LBB0_44
.LBB0_39:                               #   in Loop: Header=BB0_14 Depth=4
	and	a0, s8, s4
	slli	a1, a1, 13
	or	a0, a0, s11
	or	a0, a1, a0
	j	.LBB0_45
.LBB0_40:                               #   in Loop: Header=BB0_14 Depth=4
	andi	a1, a1, 1023
	beqz	a1, .LBB0_52
# %bb.41:                               #   in Loop: Header=BB0_14 Depth=4
	lui	a1, 231424
.LBB0_42:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        #       Parent Loop BB0_11 Depth=3
                                        #         Parent Loop BB0_14 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a2, a0
	slli	a0, a0, 1
	andi	a3, a2, 512
	add	a1, a1, s5
	beqz	a3, .LBB0_42
# %bb.43:                               #   in Loop: Header=BB0_14 Depth=4
	and	a0, s8, s4
	slli	a2, a2, 23
	srli	a2, a2, 9
	or	a0, a0, a1
.LBB0_44:                               #   in Loop: Header=BB0_14 Depth=4
	or	a0, a2, a0
.LBB0_45:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a1, s8, 17
	srli	s7, a1, 27
	fmv.w.x	fa0, a0
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi6:
	auipc	a0, %pcrel_hi(.L.str.2)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi6)
	mv	a1, s0
	mv	a2, s9
	call	vx_printf
	slli	a0, s8, 16
	srli	a0, a0, 31
	andi	a1, s8, 1023
	blt	s3, s7, .LBB0_12
# %bb.46:                               #   in Loop: Header=BB0_14 Depth=4
	beqz	s7, .LBB0_48
# %bb.47:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a0, a0, 31
	addi	a2, s7, 112
	slli	a2, a2, 23
	slli	a1, a1, 13
	or	a0, a0, a1
	or	a0, a2, a0
	j	.LBB0_13
.LBB0_48:                               #   in Loop: Header=BB0_14 Depth=4
	andi	a2, s8, 1023
	beqz	a2, .LBB0_53
# %bb.49:                               #   in Loop: Header=BB0_14 Depth=4
	lui	a2, 231424
.LBB0_50:                               #   Parent Loop BB0_4 Depth=1
                                        #     Parent Loop BB0_8 Depth=2
                                        #       Parent Loop BB0_11 Depth=3
                                        #         Parent Loop BB0_14 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a3, a1
	slli	a1, a1, 1
	andi	a4, a3, 512
	add	a2, a2, s5
	beqz	a4, .LBB0_50
# %bb.51:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a0, a0, 31
	slli	a3, a3, 23
	srli	a3, a3, 9
	or	a0, a0, a2
	or	a0, a3, a0
	j	.LBB0_13
.LBB0_52:                               #   in Loop: Header=BB0_14 Depth=4
	and	a0, s8, s4
	j	.LBB0_45
.LBB0_53:                               #   in Loop: Header=BB0_14 Depth=4
	slli	a0, a0, 31
	j	.LBB0_13
.LBB0_54:
	li	a0, 0
	lw	ra, 220(sp)                     # 4-byte Folded Reload
	lw	s0, 216(sp)                     # 4-byte Folded Reload
	lw	s1, 212(sp)                     # 4-byte Folded Reload
	lw	s2, 208(sp)                     # 4-byte Folded Reload
	lw	s3, 204(sp)                     # 4-byte Folded Reload
	lw	s4, 200(sp)                     # 4-byte Folded Reload
	lw	s5, 196(sp)                     # 4-byte Folded Reload
	lw	s6, 192(sp)                     # 4-byte Folded Reload
	lw	s7, 188(sp)                     # 4-byte Folded Reload
	lw	s8, 184(sp)                     # 4-byte Folded Reload
	lw	s9, 180(sp)                     # 4-byte Folded Reload
	lw	s10, 176(sp)                    # 4-byte Folded Reload
	lw	s11, 172(sp)                    # 4-byte Folded Reload
	flw	fs0, 168(sp)                    # 4-byte Folded Reload
	flw	fs1, 164(sp)                    # 4-byte Folded Reload
	flw	fs2, 160(sp)                    # 4-byte Folded Reload
	flw	fs3, 156(sp)                    # 4-byte Folded Reload
	flw	fs4, 152(sp)                    # 4-byte Folded Reload
	flw	fs5, 148(sp)                    # 4-byte Folded Reload
	flw	fs6, 144(sp)                    # 4-byte Folded Reload
	flw	fs7, 140(sp)                    # 4-byte Folded Reload
	flw	fs8, 136(sp)                    # 4-byte Folded Reload
	flw	fs9, 132(sp)                    # 4-byte Folded Reload
	flw	fs10, 128(sp)                   # 4-byte Folded Reload
	flw	fs11, 124(sp)                   # 4-byte Folded Reload
	addi	sp, sp, 224
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.type	.L.str,@object                  # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"i = %d, j = %d, k = %d\n"
	.size	.L.str, 24

	.type	.L.str.1,@object                # @.str.1
.L.str.1:
	.asciz	"(%d) regA[%d] = %f\n"
	.size	.L.str.1, 20

	.type	.L.str.2,@object                # @.str.2
.L.str.2:
	.asciz	"(%d) regB[%d] = %f\n"
	.size	.L.str.2, 20

	.type	.L.str.3,@object                # @.str.3
.L.str.3:
	.asciz	"(%d) regC[%d] = %f\n"
	.size	.L.str.3, 20

	.type	.L.str.4,@object                # @.str.4
.L.str.4:
	.asciz	"(%d) pe_group_id = %d\n"
	.size	.L.str.4, 23

	.type	.L.str.5,@object                # @.str.5
.L.str.5:
	.asciz	"(%d) row_group = %d\n"
	.size	.L.str.5, 21

	.type	.L.str.6,@object                # @.str.6
.L.str.6:
	.asciz	"(%d) col_group = %d\n"
	.size	.L.str.6, 21

	.ident	"clang version 16.0.6 (https://github.com/vortexgpgpu/llvm.git 58811bfa61a503fd4a5f0dc7b57802fae51c3f5d)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
