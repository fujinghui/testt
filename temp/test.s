	.file	"test.cx"
	.section	.rodata
.LC0:
	.string	"%d+%d=%d "
	.text
.globl main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	movl	$1, -24(%rbp)
	jmp	.L2
	.cfi_offset 3, -24
.L5:
	movl	$1, -20(%rbp)
	jmp	.L3
.L4:
	movl	-20(%rbp), %eax
	movl	-24(%rbp), %edx
	leal	(%rdx,%rax), %ecx
	movl	$.LC0, %eax
	movl	-20(%rbp), %edx
	movl	-24(%rbp), %ebx
	movl	%ebx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	addl	$1, -20(%rbp)
.L3:
	cmpl	$4, -20(%rbp)
	jle	.L4
	movl	$10, %edi
	call	putchar
	addl	$1, -24(%rbp)
.L2:
	cmpl	$5, -24(%rbp)
	jle	.L5
	movl	$0, %eax
	addq	$24, %rsp
	popq	%rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-17)"
	.section	.note.GNU-stack,"",@progbits
