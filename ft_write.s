
global _ft_write
extern ___error

_ft_write:
	push	rdi
	push	rsi
	push	rdx

	mov		rax, 0x2000004
	syscall
	jnc		_exit
	call	___error
	mov		rax, -1

_exit:
	pop		rdi
	pop		rsi
	pop		rdx
	ret
