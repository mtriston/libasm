extern __errno_location

global _ft_read

section .text

_ft_read:
		xor rax, rax			; rax = 0, code of read
		syscall					; execute read
		cmp rax, 0				; if rax < 0, go to error
		jl error
		ret

error:
		mov rdx, rax			; copy rax in rdx
		neg rdx					; make rdx positive
		call __errno_location	; get errno location in rax
		mov [rax], rdx			; write error code in errno location
		mov rax, -1				; return -1
		ret
