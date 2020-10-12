
global _ft_strcmp

_ft_strcmp:
	push	rcx
	xor		rcx, rcx

_ft_strcmp_loop:
	cmp		[rdi + rcx], byte 0
	jz		_ft_strcmp_exit

	mov		al, [rdi + rcx]
	cmp		al, byte [rsi + rcx]
	jne		_ft_strcmp_diff

	inc 	rcx
	jmp		_ft_strcmp_loop

_ft_strcmp_diff:
	sub		al, byte [rsi + rcx]
	movsx	rax, al ;extends segment into 32 bit 
	pop		rcx
	ret

_ft_strcmp_exit:
	mov		rax, 0
	pop		rcx
	ret