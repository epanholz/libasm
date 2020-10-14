
global _ft_read
extern ___error

_ft_read:
	push	rdi
	push	rsi
	push	rdx

	mov		rax, 0x2000003
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
