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
	li	a0, -1
	#APP
	.insn r 11, 0, 0, zero, a0, zero
	#NO_APP
	#APP
	csrr	a5, tid
	#NO_APP
	#APP
	csrr	a0, wid
	#NO_APP
	#APP
	csrr	a0, cid
	#NO_APP
	lui	a6, 524287
	lw	a0, 32(a6)
	blez	a0, .LBB0_9
# %bb.1:
	li	a1, 0
	lw	a7, 0(a6)
	lw	t0, 4(a6)
	lw	a2, 36(a6)
	lw	a3, 40(a6)
	srai	a4, a5, 31
	srli	t1, a4, 28
	add	t1, a5, t1
	srai	t1, t1, 4
	slli	t1, t1, 2
	srli	a4, a4, 30
	add	a4, a5, a4
	andi	a4, a4, -4
	sub	a4, a5, a4
	add	t1, t1, a4
	mul	t2, a3, t1
	srli	t3, t2, 31
	add	t2, t2, t3
	mul	a4, a3, a4
	srli	t3, a4, 31
	add	t3, a4, t3
	lw	a4, 8(a6)
	lw	a6, 12(a6)
	mul	t1, a2, t1
	mul	a5, a2, a5
	slli	a5, a5, 2
	add	a5, a6, a5
	slli	t2, t2, 1
	andi	a6, t2, -4
	add	a6, a6, a7
	addi	a6, a6, 8
	slli	t3, t3, 1
	andi	a7, t3, -4
	add	a7, a7, t0
	addi	a7, a7, 8
	slli	t0, t1, 2
	j	.LBB0_3
.LBB0_2:                                #   in Loop: Header=BB0_3 Depth=1
	addi	a1, a1, 4
	bge	a1, a0, .LBB0_9
.LBB0_3:                                # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_6 Depth 2
                                        #       Child Loop BB0_8 Depth 3
	blez	a2, .LBB0_2
# %bb.4:                                #   in Loop: Header=BB0_3 Depth=1
	li	t1, 0
	mul	t2, a1, a2
	slli	t2, t2, 2
	add	t2, a4, t2
	mul	t3, a1, a3
	slli	t3, t3, 1
	andi	t3, t3, -4
	add	t3, a6, t3
	j	.LBB0_6
.LBB0_5:                                #   in Loop: Header=BB0_6 Depth=2
	addi	t2, t2, 16
	fsw	ft3, 0(a5)
	fsw	ft2, 4(a5)
	fsw	ft1, 8(a5)
	addi	t1, t1, 4
	fsw	ft0, 12(a5)
	bge	t1, a2, .LBB0_2
.LBB0_6:                                #   Parent Loop BB0_3 Depth=1
                                        # =>  This Loop Header: Depth=2
                                        #       Child Loop BB0_8 Depth 3
	add	t4, t2, t0
	flw	ft3, 0(t4)
	flw	ft2, 4(t4)
	flw	ft1, 8(t4)
	flw	ft0, 12(t4)
	blez	a3, .LBB0_5
# %bb.7:                                #   in Loop: Header=BB0_6 Depth=2
	li	t4, 0
	mul	t5, t1, a3
	slli	t5, t5, 1
	andi	t5, t5, -4
	add	t5, a7, t5
	mv	t6, t3
.LBB0_8:                                #   Parent Loop BB0_3 Depth=1
                                        #     Parent Loop BB0_6 Depth=2
                                        # =>    This Inner Loop Header: Depth=3
	flw	ft4, -8(t6)
	flw	ft5, -4(t6)
	flw	ft6, 0(t6)
	flw	ft7, 4(t6)
	flw	fa0, -8(t5)
	flw	fa1, -4(t5)
	flw	fa2, 0(t5)
	flw	fa3, 4(t5)
	#APP
	.insn r4 123, 1, 1, ft3, ft4, fa0, ft3
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft2, ft5, fa1, ft2
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft1, ft6, fa2, ft1
	#NO_APP
	#APP
	.insn r4 123, 1, 1, ft0, ft7, fa3, ft0
	#NO_APP
	addi	t4, t4, 8
	addi	t6, t6, 16
	addi	t5, t5, 16
	blt	t4, a3, .LBB0_8
	j	.LBB0_5
.LBB0_9:
	li	a0, 0
	ret
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
                                        # -- End function
	.ident	"clang version 16.0.6 (https://github.com/vortexgpgpu/llvm.git 58811bfa61a503fd4a5f0dc7b57802fae51c3f5d)"
	.section	".note.GNU-stack","",@progbits
	.addrsig
