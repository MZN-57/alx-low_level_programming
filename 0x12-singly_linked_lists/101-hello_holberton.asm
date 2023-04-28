section .data
msg db 'Hello, Holberton', 10, 0
fmt db '%s', 0

section .text
global main
extern printf

main:
    mov rdx, 0
    mov rsi, msg
    mov edi, fmt
    xor eax, eax
    call printf
    xor eax, eax
    ret
