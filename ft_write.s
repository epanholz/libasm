
global _ft_write
extern ___error

_ft_write:
	push	rdi
	push	rsi
	push	rdx

	mov		rax, 0x2000004
	syscall
	jnc		_exit
	mov		r9, rax
	call	___error
	mov		[rax], r9
	mov		rax, -1
	pop		rdi
	pop		rsi
	pop		rdx
	ret

_exit:
	pop		rdi
	pop		rsi
	pop		rdx
	ret
