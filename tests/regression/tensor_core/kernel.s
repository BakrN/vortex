	.text
	.attribute	4, 16
	.attribute	5, "rv32i2p0_m2p0_a2p0_f2p0"
	.file	"kernel.cpp"
	.section	.text._Z11kernel_bodyiP12kernel_arg_t,"ax",@progbits
	.globl	_Z11kernel_bodyiP12kernel_arg_t # -- Begin function _Z11kernel_bodyiP12kernel_arg_t
	.p2align	2
	.type	_Z11kernel_bodyiP12kernel_arg_t,@function
_Z11kernel_bodyiP12kernel_arg_t:        # @_Z11kernel_bodyiP12kernel_arg_t
# %bb.0:
	addi	sp, sp, -96
	sw	ra, 92(sp)                      # 4-byte Folded Spill
	sw	s0, 88(sp)                      # 4-byte Folded Spill
	sw	s1, 84(sp)                      # 4-byte Folded Spill
	sw	s2, 80(sp)                      # 4-byte Folded Spill
	sw	s3, 76(sp)                      # 4-byte Folded Spill
	sw	s4, 72(sp)                      # 4-byte Folded Spill
	sw	s5, 68(sp)                      # 4-byte Folded Spill
	sw	s6, 64(sp)                      # 4-byte Folded Spill
	sw	s7, 60(sp)                      # 4-byte Folded Spill
	sw	s8, 56(sp)                      # 4-byte Folded Spill
	sw	s9, 52(sp)                      # 4-byte Folded Spill
	sw	s10, 48(sp)                     # 4-byte Folded Spill
	sw	s11, 44(sp)                     # 4-byte Folded Spill
	fsw	fs0, 40(sp)                     # 4-byte Folded Spill
	fsw	fs1, 36(sp)                     # 4-byte Folded Spill
	sw	a1, 32(sp)
	#APP
	csrr	a1, tid
	#NO_APP
	sw	a1, 20(sp)                      # 4-byte Folded Spill
	#APP
	csrr	a1, wid
	#NO_APP
	#APP
	csrr	a1, cid
	#NO_APP
	lw	a1, 32(sp)
	lw	s0, 32(a1)
	srai	s4, s0, 31
	mv	s3, a0
	beqz	s4, .LBB0_2
# %bb.1:
	slti	a0, s4, 0
	j	.LBB0_3
.LBB0_2:
	seqz	a0, s0
.LBB0_3:
	sw	a0, 28(sp)                      # 4-byte Folded Spill
	lw	s1, 36(a1)
	lw	a0, 44(a1)
	li	a2, 7
	srai	s5, s1, 31
	blt	a2, a0, .LBB0_5
# %bb.4:
	li	s6, 1
	j	.LBB0_6
.LBB0_5:
	srli	s6, a0, 3
.LBB0_6:
	lw	s11, 40(a1)
	mv	a0, s1
	mv	a1, s5
	mv	a2, s6
	li	a3, 0
	call	__udivdi3@plt
	mv	s2, a0
	mv	s7, a1
	mv	a0, s0
	mv	a1, s4
	mv	a2, s6
	li	a3, 0
	call	__udivdi3@plt
	mv	s6, a0
	mv	s8, a1
	mv	a0, s1
	mv	a1, s5
	mv	a2, s2
	mv	a3, s7
	call	__udivdi3@plt
	mv	s5, a0
	mv	s7, a1
	sw	s0, 16(sp)                      # 4-byte Folded Spill
	mv	a0, s0
	mv	a1, s4
	mv	a2, s6
	mv	a3, s8
	call	__udivdi3@plt
	mv	s6, a0
	mv	s8, a1
	srai	a0, s3, 31
	srli	a0, a0, 30
	add	a0, s3, a0
	srai	s9, a0, 2
	srai	s10, a0, 31
	mv	a0, s9
	mv	a1, s10
	mv	a2, s5
	mv	a3, s7
	call	__umoddi3@plt
	mv	s4, a0
	mv	s7, a1
	mv	a0, s9
	mv	a1, s10
	mv	a2, s6
	mv	a3, s8
	call	__udivdi3@plt
	mv	s5, a0
	mv	a5, a1
.Lpcrel_hi0:
	auipc	a0, %pcrel_hi(.L.str.2)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi0)
	mv	a1, s3
	mv	a2, s4
	mv	a3, s7
	mv	a4, s5
	call	vx_printf
	lw	a0, 28(sp)                      # 4-byte Folded Reload
	bnez	a0, .LBB0_16
# %bb.7:
	lw	a0, 32(sp)
	li	a5, 0
	lw	a1, 0(a0)
	mul	a2, s5, s1
	slli	a3, a2, 1
	andi	a3, a3, -4
	add	a1, a1, a3
	sw	a1, 12(sp)                      # 4-byte Folded Spill
	lw	a1, 4(a0)
	mul	a3, s4, s11
	slli	a3, a3, 1
	lw	a4, 8(a0)
	andi	a3, a3, -4
	add	a1, a1, a3
	sw	a1, 24(sp)                      # 4-byte Folded Spill
	slli	a2, a2, 2
	add	a4, a4, a2
	lw	a0, 12(a0)
	mul	a1, s4, s2
	slli	a1, a1, 2
	add	a4, a4, a1
	sw	a4, 8(sp)                       # 4-byte Folded Spill
	add	a0, a0, a2
	add	a0, a0, a1
	sw	a0, 4(sp)                       # 4-byte Folded Spill
	lw	a4, 20(sp)                      # 4-byte Folded Reload
	srli	a0, a4, 31
	add	a0, a4, a0
	srai	a1, a0, 1
	srli	a2, a0, 31
	add	a2, a1, a2
	andi	a2, a2, -2
	sub	a1, a1, a2
	srai	a2, a4, 31
	srli	a3, a2, 29
	add	a3, a4, a3
	srai	a3, a3, 3
	slli	a3, a3, 1
	andi	a0, a0, -2
	sub	s2, a4, a0
	add	s2, a3, s2
	mul	a0, s11, s2
	srli	a3, a0, 31
	add	a0, a0, a3
	mv	s6, s1
	mul	s1, s1, s2
	slli	s7, a1, 1
	srai	a0, a0, 1
	srli	a2, a2, 30
	add	a2, a4, a2
	andi	a2, a2, -4
	sub	a1, a4, a2
	mul	a1, s11, a1
	srli	a2, a1, 31
	add	a1, a1, a2
	srai	a1, a1, 1
	slli	s10, a0, 2
	slli	s0, a1, 2
	lw	a0, 16(sp)                      # 4-byte Folded Reload
	j	.LBB0_10
.LBB0_8:                                #   in Loop: Header=BB0_10 Depth=1
	lw	a0, 16(sp)                      # 4-byte Folded Reload
	lw	a5, 20(sp)                      # 4-byte Folded Reload
.LBB0_9:                                #   in Loop: Header=BB0_10 Depth=1
	addi	a5, a5, 2
	bge	a5, a0, .LBB0_16
.LBB0_10:                               # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_13 Depth 2
                                        #       Child Loop BB0_15 Depth 3
	blez	s6, .LBB0_9
# %bb.11:                               #   in Loop: Header=BB0_10 Depth=1
	li	s5, 0
	mul	a0, a5, s6
	slli	a0, a0, 2
	lw	s8, 4(sp)                       # 4-byte Folded Reload
	add	s8, s8, a0
	lw	s4, 8(sp)                       # 4-byte Folded Reload
	add	s4, s4, a0
	sw	a5, 20(sp)                      # 4-byte Folded Spill
	mul	a0, a5, s11
	slli	a0, a0, 1
	lw	a1, 12(sp)                      # 4-byte Folded Reload
	add	a0, a1, a0
	sw	a0, 28(sp)                      # 4-byte Folded Spill
	j	.LBB0_13
.LBB0_12:                               #   in Loop: Header=BB0_13 Depth=2
	addi	s4, s4, 16
.Lpcrel_hi1:
	auipc	a0, %pcrel_hi(.L.str.3)
	addi	a0, a0, %pcrel_lo(.Lpcrel_hi1)
	mv	a1, s2
	mv	a2, s7
	call	vx_printf
	add	s9, s8, s9
	add	s3, s9, s3
	fsw	fs1, 0(s3)
	fsw	fs0, 4(s3)
	addi	s5, s5, 4
	addi	s8, s8, 16
	bge	s5, s6, .LBB0_8
.LBB0_13:                               #   Parent Loop BB0_10 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_15 Depth 3
	slli	s9, s1, 2
	add	a0, s4, s9
	slli	s3, s7, 2
	add	a0, a0, s3
	flw	fs1, 0(a0)
	flw	fs0, 4(a0)
	blez	s11, .LBB0_12
# %bb.14:                               #   in Loop: Header=BB0_13 Depth=2
	li	a0, 0
	mul	a1, s5, s11
	slli	a1, a1, 1
	lw	a2, 24(sp)                      # 4-byte Folded Reload
	add	a1, a2, a1
	lw	a2, 28(sp)                      # 4-byte Folded Reload
.LBB0_15:                               #   Parent Loop BB0_10 Depth=1
                                        #     Parent Loop BB0_13 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	add	a3, a2, s10
	flw	ft0, 0(a3)
	flw	ft1, 4(a3)
	add	a3, a1, s0
	flw	ft2, 0(a3)
	flw	ft3, 4(a3)
	#APP
	.insn r4 123, 1, 1, fs1, ft0, ft2, fs1
	#NO_APP
	#APP
	.insn r4 123, 1, 1, fs0, ft1, ft3, fs0
	#NO_APP
	addi	a2, a2, 8
	addi	a0, a0, 4
	addi	a1, a1, 8
	blt	a0, s11, .LBB0_15
	j	.LBB0_12
.LBB0_16:
	lw	ra, 92(sp)                      # 4-byte Folded Reload
	lw	s0, 88(sp)                      # 4-byte Folded Reload
	lw	s1, 84(sp)                      # 4-byte Folded Reload
	lw	s2, 80(sp)                      # 4-byte Folded Reload
	lw	s3, 76(sp)                      # 4-byte Folded Reload
	lw	s4, 72(sp)                      # 4-byte Folded Reload
	lw	s5, 68(sp)                      # 4-byte Folded Reload
	lw	s6, 64(sp)                      # 4-byte Folded Reload
	lw	s7, 60(sp)                      # 4-byte Folded Reload
	lw	s8, 56(sp)                      # 4-byte Folded Reload
	lw	s9, 52(sp)                      # 4-byte Folded Reload
	lw	s10, 48(sp)                     # 4-byte Folded Reload
	lw	s11, 44(sp)                     # 4-byte Folded Reload
	flw	fs0, 40(sp)                     # 4-byte Folded Reload
	flw	fs1, 36(sp)                     # 4-byte Folded Reload
	addi	sp, sp, 96
	ret
.Lfunc_end0:
	.size	_Z11kernel_bodyiP12kernel_arg_t, .Lfunc_end0-_Z11kernel_bodyiP12kernel_arg_t
                                        # -- End function
	.section	.text.main,"ax",@progbits
	.globl	main                            # -- Begin function main
	.p2align	2
	.type	main,@function
main:                                   # @main
# %bb.0:
	addi	sp, sp, -16
	sw	ra, 12(sp)                      # 4-byte Folded Spill
	lui	a0, 524287
	lw	a0, 44(a0)
.Lpcrel_hi2:
	auipc	a1, %pcrel_hi(_Z11kernel_bodyiP12kernel_arg_t)
	addi	a1, a1, %pcrel_lo(.Lpcrel_hi2)
	lui	a2, 524287
	call	vx_spawn_tasks
	li	a0, 0
	lw	ra, 12(sp)                      # 4-byte Folded Reload
	addi	sp, sp, 16
	ret
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
                                        # -- End function
	.type	.L.str.2,@object                # @.str.2
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str.2:
	.asciz	"task_id: %d, blockX = %d, blockY = %d\n"
	.size	.L.str.2, 39

	.type	.L.str.3,@object                # @.str.3
.L.str.3:
	.asciz	"start_row: %d, start_col: %d\n"
	.size	.L.str.3, 30

	.ident	"clang version 16.0.6 (https://github.com/vortexgpgpu/llvm.git 58811bfa61a503fd4a5f0dc7b57802fae51c3f5d)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.addrsig_sym _Z11kernel_bodyiP12kernel_arg_t
