
global _ft_strlen

_ft_strlen:
	push	rcx
	xor		rcx, rcx
	push	rdi

_ft_strlen_loop:
	cmp		[rdi], byte 0
	jz		_ft_strlen_exit			;jump if zero/equal

	inc		rcx
	inc		rdi
	jmp		_ft_strlen_loop

_ft_strlen_exit:
	mov		rax, rcx
	pop		rcx
	pop		rdi
	ret