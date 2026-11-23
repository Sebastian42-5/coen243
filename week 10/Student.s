	.file	"student.cpp"
	.text
	.align 2
	.globl	_ZN7StudentC2EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	_ZN7StudentC2EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN7StudentC2EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
_ZN7StudentC2EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE:
.LFB1459:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	%edx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	16(%rbp), %rax
	movl	24(%rbp), %edx
	movl	%edx, (%rax)
	movq	16(%rbp), %rax
	leaq	8(%rax), %rcx
	movq	32(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_ZN7StudentC1EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.def	_ZN7StudentC1EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE;	.scl	2;	.type	32;	.endef
	.set	_ZN7StudentC1EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE,_ZN7StudentC2EiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
	.align 2
	.globl	_ZNK7Student5getIdEv
	.def	_ZNK7Student5getIdEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK7Student5getIdEv
_ZNK7Student5getIdEv:
.LFB1461:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	ret
	.seh_endproc
	.align 2
	.globl	_ZNK7Student7getNameB5cxx11Ev
	.def	_ZNK7Student7getNameB5cxx11Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK7Student7getNameB5cxx11Ev
_ZNK7Student7getNameB5cxx11Ev:
.LFB1462:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	leaq	8(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (MinGW-W64 x86_64-msvcrt-posix-seh, built by Brecht Sanders) 13.1.0"
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_;	.scl	2;	.type	32;	.endef
