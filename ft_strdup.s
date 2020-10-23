
global	_ft_strdup
extern	_malloc
extern _ft_strcpy

_ft_strdup:
	push		rcx
	xor			rcx, rcx

_count:
	cmp			[rdi + rcx], byte 0
	jz			_allocate				;jump if zero
	inc			rcx
	jmp			_count

_allocate:
	push		rbp
	push		rdi						;stack alignment
	mov			rbp, rsp
	and			rsp, -16
	inc			rcx
	mov			rdi, rcx
	call		_malloc					;malloc call returns rax
	mov			rsp, rbp
	pop			rdi
	pop			rbp
	cmp			rax, 0					;protecting malloc
	jz			_exit

_dup:
	push		rdi
	mov			rsi, rdi
	mov			rdi, rax
	call		_ft_strcpy
	pop			rdi

_exit:
	pop			rcx
	ret