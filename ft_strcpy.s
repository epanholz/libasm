
global _ft_strcpy

_ft_strcpy:
	mov		rax, rdi
	cmp		[rsi], byte 0
	je		_ft_strcpy_exit		;jump if equal

_ft_strcpy_loop:
	movsb						;move byte from string to string and inc
	cmp		[rsi], byte 0
	jne		_ft_strcpy_loop		;jump if not equal

_ft_strcpy_exit:
	movsb
	mov		rdi, rax
	ret

;The instruction movs is used to copy source string into the destination
;This instruction has two variants: movsb and movsw. The movsb ("move string byte") 
;moves one byte at a time, whereas movsw moves two bytes at a time.
