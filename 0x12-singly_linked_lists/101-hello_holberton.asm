section .data
	hello db "Hello, Holberton", 0xa, 0

section .text
	global main

extern printf

main:
	push rbp
	mov rbp, rsp

	lea rdi, [hello]
	call printf
	
	mov rsp, rbp
	pop rbp
	
	xor rax, rax
	ret
