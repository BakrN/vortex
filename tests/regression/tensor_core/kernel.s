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
	addi	sp, sp, -208
	sw	ra, 204(sp)                     # 4-byte Folded Spill
	sw	s0, 200(sp)                     # 4-byte Folded Spill
	sw	s1, 196(sp)                     # 4-byte Folded Spill
	sw	s2, 192(sp)                     # 4-byte Folded Spill
	sw	s3, 188(sp)                     # 4-byte Folded Spill
	sw	s4, 184(sp)                     # 4-byte Folded Spill
	sw	s5, 180(sp)                     # 4-byte Folded Spill
	sw	s6, 176(sp)                     # 4-byte Folded Spill
	sw	s7, 172(sp)                     # 4-byte Folded Spill
	sw	s8, 168(sp)                     # 4-byte Folded Spill
	sw	s9, 164(sp)                     # 4-byte Folded Spill
	sw	s10, 160(sp)                    # 4-byte Folded Spill
	sw	s11, 156(sp)                    # 4-byte Folded Spill
	fsw	fs0, 152(sp)                    # 4-byte Folded Spill
	fsw	fs1, 148(sp)                    # 4-byte Folded Spill
	fsw	fs2, 144(sp)                    # 4-byte Folded Spill
	fsw	fs3, 140(sp)                    # 4-byte Folded Spill
	fsw	fs4, 136(sp)                    # 4-byte Folded Spill
	fsw	fs5, 132(sp)                    # 4-byte Folded Spill
	fsw	fs6, 128(sp)                    # 4-byte Folded Spill
	fsw	fs7, 124(sp)                    # 4-byte Folded Spill
	fsw	fs8, 120(sp)                    # 4-byte Folded Spill
	fsw	fs9, 116(sp)                    # 4-byte Folded Spill
	fsw	fs10, 112(sp)                   # 4-byte Folded Spill
	fsw	fs11, 108(sp)                   # 4-byte Folded Spill
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
	lw	a6, 32(a0)
	blez	a6, .LBB0_55
# %bb.1:
	sw	zero, 52(sp)                    # 4-byte Folded Spill
	lw	a1, 0(a0)
	sw	a1, 12(sp)                      # 4-byte Folded Spill
	lw	a1, 4(a0)
	sw	a1, 24(sp)                      # 4-byte Folded Spill
	lw	a1, 8(a0)
	lw	a2, 12(a0)
	lw	a7, 36(a0)
	lw	t0, 40(a0)
	srai	a0, s0, 31
	srli	a3, a0, 28
	add	a3, s0, a3
	srai	a3, a3, 4
	slli	a3, a3, 2
	srli	a0, a0, 30
	add	a0, s0, a0
	andi	a0, a0, -4
	sub	a0, s0, a0
	add	a3, a3, a0
	mul	a4, t0, a3
	srli	a5, a4, 31
	add	a4, a4, a5
	srai	a4, a4, 1
	mul	a0, t0, a0
	srli	a5, a0, 31
	add	a0, a0, a5
	srai	a0, a0, 1
	sw	a6, 16(sp)                      # 4-byte Folded Spill
	mul	a3, a6, a3
	sw	a7, 32(sp)                      # 4-byte Folded Spill
	mul	a5, a7, s0
	slli	a5, a5, 2
	add	a2, a2, a5
	sw	a2, 28(sp)                      # 4-byte Folded Spill
	slli	a3, a3, 2
	add	a1, a1, a3
	sw	a1, 20(sp)                      # 4-byte Folded Spill
	fmv.w.x	ft0, zero
	slli	a4, a4, 2
	sw	a4, 44(sp)                      # 4-byte Folded Spill
	slli	a0, a0, 2
	sw	a0, 40(sp)                      # 4-byte Folded Spill
.Lpcrel_hi0:
	auipc	a0, %pcrel_hi(.L.str)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi0)
	sw	a0, 36(sp)                      # 4-byte Folded Spill
	addi	s10, sp, 92
	li	s8, 30
	lui	s9, 524288
	lui	s7, 1046528
	addi	s1, sp, 76
	lui	s2, 522240
	fmv.s	ft1, ft0
	fmv.s	ft3, ft0
	fmv.s	ft2, ft0
	sw	t0, 48(sp)                      # 4-byte Folded Spill
	j	.LBB0_3
.LBB0_2:                                #   in Loop: Header=BB0_3 Depth=1
	lw	a1, 52(sp)                      # 4-byte Folded Reload
	addi	a1, a1, 4
	lw	a0, 16(sp)                      # 4-byte Folded Reload
	sw	a1, 52(sp)                      # 4-byte Folded Spill
	bge	a1, a0, .LBB0_55
.LBB0_3:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_6 Depth 2
                                        #       Child Loop BB0_9 Depth 3
                                        #         Child Loop BB0_12 Depth 4
                                        #           Child Loop BB0_18 Depth 5
                                        #           Child Loop BB0_29 Depth 5
                                        #           Child Loop BB0_40 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	lw	a0, 32(sp)                      # 4-byte Folded Reload
	blez	a0, .LBB0_2
# %bb.4:                                #   in Loop: Header=BB0_3 Depth=1
	sw	zero, 60(sp)                    # 4-byte Folded Spill
	lw	a0, 52(sp)                      # 4-byte Folded Reload
	mul	a0, a0, t0
	slli	a0, a0, 1
	lw	a1, 12(sp)                      # 4-byte Folded Reload
	add	a4, a1, a0
	j	.LBB0_6
.LBB0_5:                                #   in Loop: Header=BB0_6 Depth=2
	lw	a0, 28(sp)                      # 4-byte Folded Reload
	fsw	ft0, 0(a0)
	fsw	ft1, 4(a0)
	fsw	ft2, 8(a0)
	lw	a1, 60(sp)                      # 4-byte Folded Reload
	addi	a1, a1, 4
	fsw	ft3, 12(a0)
	lw	a0, 32(sp)                      # 4-byte Folded Reload
	sw	a1, 60(sp)                      # 4-byte Folded Spill
	bge	a1, a0, .LBB0_2
.LBB0_6:                                #   Parent Loop BB0_3 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_9 Depth 3
                                        #         Child Loop BB0_12 Depth 4
                                        #           Child Loop BB0_18 Depth 5
                                        #           Child Loop BB0_29 Depth 5
                                        #           Child Loop BB0_40 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	blez	t0, .LBB0_5
# %bb.7:                                #   in Loop: Header=BB0_6 Depth=2
	li	a3, 0
	lw	a2, 60(sp)                      # 4-byte Folded Reload
	mul	a0, a2, t0
	slli	a0, a0, 1
	lw	a1, 24(sp)                      # 4-byte Folded Reload
	add	a5, a1, a0
	slli	a0, a2, 2
	lw	a1, 20(sp)                      # 4-byte Folded Reload
	add	a0, a1, a0
	sw	a0, 56(sp)                      # 4-byte Folded Spill
	j	.LBB0_9
.LBB0_8:                                #   in Loop: Header=BB0_9 Depth=3
	fmv.s	fa0, fs3
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi5:
	auipc	a0, %pcrel_hi(.L.str.3)
	addi	s5, a0, %pcrel_lo(.Lpcrel_hi5)
	mv	a0, s5
	mv	a1, s0
	li	a2, 0
	call	vx_printf
	fmv.s	fa0, fs2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 1
	mv	a0, s5
	mv	a1, s0
	call	vx_printf
	fmv.s	fa0, fs1
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 2
	mv	a0, s5
	mv	a1, s0
	call	vx_printf
	fmv.s	fa0, fs0
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
	li	a2, 3
	mv	a0, s5
	mv	a1, s0
	call	vx_printf
	#APP
	.insn r4 123, 1, 1, ft0, fs7, fs11, fs3
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft1, fs6, fs10, fs2
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft2, fs5, fs9, fs1
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft3, fs4, fs8, fs0
	#NO_APP
	lw	a4, 72(sp)                      # 4-byte Folded Reload
	addi	a4, a4, 16
	lw	a3, 68(sp)                      # 4-byte Folded Reload
	addi	a3, a3, 8
	lw	a5, 64(sp)                      # 4-byte Folded Reload
	addi	a5, a5, 16
	lw	t0, 48(sp)                      # 4-byte Folded Reload
	bge	a3, t0, .LBB0_5
.LBB0_9:                                #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Loop Header: Depth=3
                                        #         Child Loop BB0_12 Depth 4
                                        #           Child Loop BB0_18 Depth 5
                                        #           Child Loop BB0_29 Depth 5
                                        #           Child Loop BB0_40 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	lw	a0, 44(sp)                      # 4-byte Folded Reload
	sw	a4, 72(sp)                      # 4-byte Folded Spill
	add	a0, a4, a0
	flw	fs7, 0(a0)
	fsw	fs7, 92(sp)
	flw	fs6, 4(a0)
	fsw	fs6, 96(sp)
	flw	fs5, 8(a0)
	fsw	fs5, 100(sp)
	flw	fs4, 12(a0)
	fsw	fs4, 104(sp)
	lw	a0, 40(sp)                      # 4-byte Folded Reload
	sw	a5, 64(sp)                      # 4-byte Folded Spill
	add	a0, a5, a0
	flw	fs11, 0(a0)
	fsw	fs11, 76(sp)
	flw	fs10, 4(a0)
	fsw	fs10, 80(sp)
	flw	fs9, 8(a0)
	fsw	fs9, 84(sp)
	flw	fs8, 12(a0)
	fsw	fs8, 88(sp)
	lw	a0, 56(sp)                      # 4-byte Folded Reload
	flw	fs3, 0(a0)
	flw	fs2, 4(a0)
	flw	fs1, 8(a0)
	flw	fs0, 12(a0)
	lw	a0, 36(sp)                      # 4-byte Folded Reload
	lw	a1, 52(sp)                      # 4-byte Folded Reload
	lw	a2, 60(sp)                      # 4-byte Folded Reload
	sw	a3, 68(sp)                      # 4-byte Folded Spill
	call	vx_printf
	li	s5, 0
	li	s11, 1
	j	.LBB0_12
.LBB0_10:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	slli	a3, a3, 13
	or	a1, a3, s2
	or	a2, a2, a1
.LBB0_11:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a0
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi4:
	auipc	a0, %pcrel_hi(.L.str.2)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi4)
	mv	a1, s0
	mv	a2, s6
	call	vx_printf
	andi	a0, s11, 1
	li	s5, 2
	li	s11, 0
	beqz	a0, .LBB0_8
.LBB0_12:                               #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_9 Depth=3
                                        # =>      This Loop Header: Depth=4
                                        #           Child Loop BB0_18 Depth 5
                                        #           Child Loop BB0_29 Depth 5
                                        #           Child Loop BB0_40 Depth 5
                                        #           Child Loop BB0_50 Depth 5
	slli	s3, s5, 2
	add	a0, s10, s3
	lw	s6, 0(a0)
	srli	a3, s6, 16
	slli	a4, s6, 1
	srli	a4, a4, 27
	andi	a2, a3, 1023
	slti	a0, a4, 31
	vx_split	a0, a0
	blt	s8, a4, .LBB0_15
# %bb.13:                               #   in Loop: Header=BB0_12 Depth=4
	seqz	a1, a4
	vx_split	a1, a1
	beqz	a4, .LBB0_16
# %bb.14:                               #   in Loop: Header=BB0_12 Depth=4
	and	a3, s6, s9
	addi	a4, a4, 112
	slli	a4, a4, 23
	slli	a2, a2, 13
	or	a2, a3, a2
	or	a2, a4, a2
	j	.LBB0_22
.LBB0_15:                               #   in Loop: Header=BB0_12 Depth=4
	and	a1, s6, s9
	slli	a3, a3, 13
	or	a2, a1, s2
	or	a2, a3, a2
	j	.LBB0_23
.LBB0_16:                               #   in Loop: Header=BB0_12 Depth=4
	andi	a4, a3, 1023
	seqz	a3, a4
	vx_split	a3, a3
	beqz	a4, .LBB0_20
# %bb.17:                               #   in Loop: Header=BB0_12 Depth=4
	lui	a4, 231424
	csrr	a5, tmask
.LBB0_18:                               #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_9 Depth=3
                                        #         Parent Loop BB0_12 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a6, a2
	slli	a2, a2, 1
	andi	a7, a6, 512
	seqz	t0, a7
	add	a4, a4, s7
	vx_pred	t0, a5
	beqz	a7, .LBB0_18
# %bb.19:                               #   in Loop: Header=BB0_12 Depth=4
	and	a2, s6, s9
	slli	a6, a6, 23
	srli	a5, a6, 9
	or	a2, a2, a4
	or	a2, a5, a2
	j	.LBB0_21
.LBB0_20:                               #   in Loop: Header=BB0_12 Depth=4
	and	a2, s6, s9
.LBB0_21:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a3
.LBB0_22:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a1
.LBB0_23:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a0
	slli	a0, s6, 17
	srli	s4, a0, 27
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi1:
	auipc	a0, %pcrel_hi(.L.str.1)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi1)
	mv	a1, s0
	mv	a2, s5
	call	vx_printf
	slli	a2, s6, 16
	srli	a2, a2, 31
	andi	a3, s6, 1023
	slti	a0, s4, 31
	vx_split	a0, a0
	blt	s8, s4, .LBB0_26
# %bb.24:                               #   in Loop: Header=BB0_12 Depth=4
	seqz	a1, s4
	vx_split	a1, a1
	beqz	s4, .LBB0_27
# %bb.25:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	addi	a4, s4, 112
	slli	a4, a4, 23
	slli	a3, a3, 13
	or	a2, a2, a3
	or	a2, a4, a2
	j	.LBB0_33
.LBB0_26:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	slli	a3, a3, 13
	or	a1, a3, s2
	or	a2, a2, a1
	j	.LBB0_34
.LBB0_27:                               #   in Loop: Header=BB0_12 Depth=4
	andi	a5, s6, 1023
	seqz	a4, a5
	vx_split	a4, a4
	beqz	a5, .LBB0_31
# %bb.28:                               #   in Loop: Header=BB0_12 Depth=4
	lui	a5, 231424
	csrr	a6, tmask
.LBB0_29:                               #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_9 Depth=3
                                        #         Parent Loop BB0_12 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a7, a3
	slli	a3, a3, 1
	andi	t0, a7, 512
	seqz	t1, t0
	add	a5, a5, s7
	vx_pred	t1, a6
	beqz	t0, .LBB0_29
# %bb.30:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	slli	a7, a7, 23
	srli	a3, a7, 9
	or	a2, a2, a5
	or	a2, a3, a2
	j	.LBB0_32
.LBB0_31:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
.LBB0_32:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a4
.LBB0_33:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a1
.LBB0_34:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a0
	ori	s6, s5, 1
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi2:
	auipc	a0, %pcrel_hi(.L.str.1)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi2)
	mv	a1, s0
	mv	a2, s6
	call	vx_printf
	add	s3, s1, s3
	lw	s3, 0(s3)
	srli	a3, s3, 16
	slli	a4, s3, 1
	srli	a4, a4, 27
	andi	a2, a3, 1023
	slti	a0, a4, 31
	vx_split	a0, a0
	blt	s8, a4, .LBB0_37
# %bb.35:                               #   in Loop: Header=BB0_12 Depth=4
	seqz	a1, a4
	vx_split	a1, a1
	beqz	a4, .LBB0_38
# %bb.36:                               #   in Loop: Header=BB0_12 Depth=4
	and	a3, s3, s9
	addi	a4, a4, 112
	slli	a4, a4, 23
	slli	a2, a2, 13
	or	a2, a3, a2
	or	a2, a4, a2
	j	.LBB0_44
.LBB0_37:                               #   in Loop: Header=BB0_12 Depth=4
	and	a1, s3, s9
	slli	a3, a3, 13
	or	a2, a1, s2
	or	a2, a3, a2
	j	.LBB0_45
.LBB0_38:                               #   in Loop: Header=BB0_12 Depth=4
	andi	a4, a3, 1023
	seqz	a3, a4
	vx_split	a3, a3
	beqz	a4, .LBB0_42
# %bb.39:                               #   in Loop: Header=BB0_12 Depth=4
	lui	a4, 231424
	csrr	a5, tmask
.LBB0_40:                               #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_9 Depth=3
                                        #         Parent Loop BB0_12 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a6, a2
	slli	a2, a2, 1
	andi	a7, a6, 512
	seqz	t0, a7
	add	a4, a4, s7
	vx_pred	t0, a5
	beqz	a7, .LBB0_40
# %bb.41:                               #   in Loop: Header=BB0_12 Depth=4
	and	a2, s3, s9
	slli	a6, a6, 23
	srli	a5, a6, 9
	or	a2, a2, a4
	or	a2, a5, a2
	j	.LBB0_43
.LBB0_42:                               #   in Loop: Header=BB0_12 Depth=4
	and	a2, s3, s9
.LBB0_43:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a3
.LBB0_44:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a1
.LBB0_45:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a0
	slli	a0, s3, 17
	srli	s4, a0, 27
	fmv.w.x	fa0, a2
	call	__extendsfdf2@plt
	mv	a4, a0
	mv	a5, a1
.Lpcrel_hi3:
	auipc	a0, %pcrel_hi(.L.str.2)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi3)
	mv	a1, s0
	mv	a2, s5
	call	vx_printf
	slli	a2, s3, 16
	srli	a2, a2, 31
	andi	a3, s3, 1023
	slti	a0, s4, 31
	vx_split	a0, a0
	blt	s8, s4, .LBB0_10
# %bb.46:                               #   in Loop: Header=BB0_12 Depth=4
	seqz	a1, s4
	vx_split	a1, a1
	beqz	s4, .LBB0_48
# %bb.47:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	addi	a4, s4, 112
	slli	a4, a4, 23
	slli	a3, a3, 13
	or	a2, a2, a3
	or	a2, a4, a2
	j	.LBB0_54
.LBB0_48:                               #   in Loop: Header=BB0_12 Depth=4
	andi	a5, s3, 1023
	seqz	a4, a5
	vx_split	a4, a4
	beqz	a5, .LBB0_52
# %bb.49:                               #   in Loop: Header=BB0_12 Depth=4
	lui	a5, 231424
	csrr	a6, tmask
.LBB0_50:                               #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        #       Parent Loop BB0_9 Depth=3
                                        #         Parent Loop BB0_12 Depth=4
                                        # =>        This Inner Loop Header: Depth=5
	mv	a7, a3
	slli	a3, a3, 1
	andi	t0, a7, 512
	seqz	t1, t0
	add	a5, a5, s7
	vx_pred	t1, a6
	beqz	t0, .LBB0_50
# %bb.51:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
	slli	a7, a7, 23
	srli	a3, a7, 9
	or	a2, a2, a5
	or	a2, a3, a2
	j	.LBB0_53
.LBB0_52:                               #   in Loop: Header=BB0_12 Depth=4
	slli	a2, a2, 31
.LBB0_53:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a4
.LBB0_54:                               #   in Loop: Header=BB0_12 Depth=4
	vx_join	a1
	j	.LBB0_11
.LBB0_55:
	li	a0, 0
	lw	ra, 204(sp)                     # 4-byte Folded Reload
	lw	s0, 200(sp)                     # 4-byte Folded Reload
	lw	s1, 196(sp)                     # 4-byte Folded Reload
	lw	s2, 192(sp)                     # 4-byte Folded Reload
	lw	s3, 188(sp)                     # 4-byte Folded Reload
	lw	s4, 184(sp)                     # 4-byte Folded Reload
	lw	s5, 180(sp)                     # 4-byte Folded Reload
	lw	s6, 176(sp)                     # 4-byte Folded Reload
	lw	s7, 172(sp)                     # 4-byte Folded Reload
	lw	s8, 168(sp)                     # 4-byte Folded Reload
	lw	s9, 164(sp)                     # 4-byte Folded Reload
	lw	s10, 160(sp)                    # 4-byte Folded Reload
	lw	s11, 156(sp)                    # 4-byte Folded Reload
	flw	fs0, 152(sp)                    # 4-byte Folded Reload
	flw	fs1, 148(sp)                    # 4-byte Folded Reload
	flw	fs2, 144(sp)                    # 4-byte Folded Reload
	flw	fs3, 140(sp)                    # 4-byte Folded Reload
	flw	fs4, 136(sp)                    # 4-byte Folded Reload
	flw	fs5, 132(sp)                    # 4-byte Folded Reload
	flw	fs6, 128(sp)                    # 4-byte Folded Reload
	flw	fs7, 124(sp)                    # 4-byte Folded Reload
	flw	fs8, 120(sp)                    # 4-byte Folded Reload
	flw	fs9, 116(sp)                    # 4-byte Folded Reload
	flw	fs10, 112(sp)                   # 4-byte Folded Reload
	flw	fs11, 108(sp)                   # 4-byte Folded Reload
	addi	sp, sp, 208
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

	.ident	"clang version 16.0.6 (https://github.com/vortexgpgpu/llvm.git 58811bfa61a503fd4a5f0dc7b57802fae51c3f5d)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
