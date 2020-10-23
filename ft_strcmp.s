
global _ft_strcmp

_ft_strcmp:
	push	rcx
	xor		rcx, rcx

_ft_strcmp_loop:
	mov		al, [rdi + rcx]
	cmp		al, byte [rsi + rcx]
	jne		_ft_strcmp_diff				;jump if not equal

	cmp		[rdi + rcx], byte 0
	jz		_ft_strcmp_diff				;jump if zero/equal

	inc 	rcx
	jmp		_ft_strcmp_loop

_ft_strcmp_diff:
	movzx	r9, al
	movzx   r10, byte [rsi + rcx]
	sub		r9, r10
	;sub		r9, byte [rsi + rcx]
	;movzx	r9, byte al					;extends segment into 32 bit 
	mov		rax, r9
	pop		rcx
	ret