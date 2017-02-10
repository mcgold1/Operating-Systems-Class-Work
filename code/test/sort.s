	.file	1 "sort.c"

 # GNU C 2.7.0 [AL 1.1, MM 40] DECstation running ultrix compiled by CC

 # Cc1 defaults:

 # Cc1 arguments (-G value = 8, Cpu = 3000, ISA = 1):
 # -quiet -dumpbase -o

gcc2_compiled.:
__gnu_compiled_c:
	.text
	.align	2
	.globl	main
	.ent	main
main:
	.frame	$fp,40,$31		# vars= 16, regs= 2/0, args= 16, extra= 0
	.mask	0xc0000000,-4
	.fmask	0x00000000,0
	subu	$sp,$sp,40
	sw	$31,36($sp)
	sw	$fp,32($sp)
	move	$fp,$sp
	jal	__main
	sw	$0,16($fp)
$L2:
	lw	$2,16($fp)
	slt	$3,$2,1024
	bne	$3,$0,$L5
	j	$L3
$L5:
	lw	$2,16($fp)
	move	$3,$2
	sll	$2,$3,2
	la	$3,A
	addu	$2,$2,$3
	li	$3,0x00000400		# 1024
	lw	$4,16($fp)
	subu	$3,$3,$4
	sw	$3,0($2)
$L4:
	lw	$3,16($fp)
	addu	$2,$3,1
	move	$3,$2
	sw	$3,16($fp)
	j	$L2
$L3:
	.set	noreorder
	nop
	.set	reorder
	sw	$0,16($fp)
$L6:
	lw	$2,16($fp)
	slt	$3,$2,1023
	bne	$3,$0,$L9
	j	$L7
$L9:
	.set	noreorder
	nop
	.set	reorder
	lw	$2,16($fp)
	sw	$2,20($fp)
$L10:
	li	$2,0x000003ff		# 1023
	lw	$3,16($fp)
	subu	$2,$2,$3
	lw	$3,20($fp)
	slt	$2,$3,$2
	bne	$2,$0,$L13
	j	$L11
$L13:
	lw	$2,20($fp)
	move	$3,$2
	sll	$2,$3,2
	la	$3,A
	addu	$2,$2,$3
	lw	$3,20($fp)
	move	$4,$3
	sll	$3,$4,2
	la	$4,A+4
	addu	$3,$3,$4
	lw	$2,0($2)
	lw	$3,0($3)
	slt	$2,$3,$2
	beq	$2,$0,$L14
	lw	$2,20($fp)
	move	$3,$2
	sll	$2,$3,2
	la	$3,A
	addu	$2,$2,$3
	lw	$3,0($2)
	sw	$3,24($fp)
	lw	$2,20($fp)
	move	$3,$2
	sll	$2,$3,2
	la	$3,A
	addu	$2,$2,$3
	lw	$3,20($fp)
	move	$4,$3
	sll	$3,$4,2
	la	$4,A+4
	addu	$3,$3,$4
	lw	$4,0($3)
	sw	$4,0($2)
	lw	$2,20($fp)
	move	$3,$2
	sll	$2,$3,2
	la	$3,A+4
	addu	$2,$2,$3
	lw	$3,24($fp)
	sw	$3,0($2)
$L14:
$L12:
	lw	$3,20($fp)
	addu	$2,$3,1
	move	$3,$2
	sw	$3,20($fp)
	j	$L10
$L11:
$L8:
	lw	$3,16($fp)
	addu	$2,$3,1
	move	$3,$2
	sw	$3,16($fp)
	j	$L6
$L7:
	lw	$4,A
	jal	Exit
$L1:
	move	$sp,$fp			# sp not trusted here
	lw	$31,36($sp)
	lw	$fp,32($sp)
	addu	$sp,$sp,40
	j	$31
	.end	main

	.comm	A,4096
