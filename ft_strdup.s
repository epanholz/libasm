
global	_ft_strdup
extern	_malloc

_ft_strdup:
	push	rcx
	xor		rcx, rcx

_count:
	cmp		[rdi + rcx], byte 0
	jne		_allocate
	inc		rcx

_allocate:
	mov		rdi, rcx
	call	_malloc					;malloc returns rax

_exit:
	pop		rcx
	ret