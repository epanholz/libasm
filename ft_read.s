
global _ft_read
extern ___error

_ft_read:
	push	rdi
	push	rsi
	push	rdx

	mov		rax, 0x2000003
	syscall
	jnc		_exit
	call	___error
	mov		rax, -1

_exit:
	pop		rdi
	pop		rsi
	pop		rdx
	ret
