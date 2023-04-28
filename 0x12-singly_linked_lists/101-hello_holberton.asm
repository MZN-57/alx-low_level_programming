.section .data
format:
	.ascii "Hello, Holberton\n\0"
.section .text
.global main
extern printf
main:
	movl $format, %edi
	xorl %eax, %eax
	call printf
	xorl %eax, %eax
	ret
