	extern printf

	section .data
msg:	db "Hello, Holberton",0xa
fmt:	db "%s", 16, 0

	section .text

	global .main
main:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call  printf

	pop rbp

	mov rax,0
	ret
