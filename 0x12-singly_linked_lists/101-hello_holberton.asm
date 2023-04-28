section .data
msg db 'Hello, Holberton', 0
fmt db '%s\n', 0

section .text
global main
extern printf

main:
	push msg
	push fmt
	call printf
	add rsp, 16
	mov eax, 0
	ret
