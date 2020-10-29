global _ft_list_size

_ft_list_size:
	push	rdi
	push	rcx
	xor		rcx, rcx
	cmp		rdi, byte 0
	je		_exit

_iterate:
	inc		rcx
	cmp		[rdi + 8], byte 0
	je		_exit
	mov 	rdi, [rdi + 8]
	jmp		_iterate

_exit:
	mov		rax, rcx
	pop		rdi
	pop		rcx
	ret