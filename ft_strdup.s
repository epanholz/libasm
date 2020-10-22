
global	_ft_strdup
extern	_malloc

_ft_strdup:
	push		rcx
	xor			rcx, rcx

_count:
	cmp			[rdi + rcx], byte 0
	jz			_allocate				;jump if zero
	inc			rcx
	jmp			_count

_allocate:
	mov			rdi, rcx
	call		_malloc					;malloc returns rax
	;cmp			rax, 0
	;jne			_dup_loop			;jump if not equal
	;jmp			_exit


_exit:
	;movsb
	;mov		rdi, rax
	pop			rcx
	ret