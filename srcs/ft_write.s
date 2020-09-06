extern __errno_location

global _ft_write

section .text

_ft_write:
			mov rax, 1					; 1 is code of write
			syscall						; execute write
			cmp rax, 0					; compare return value with zero
			jl error					; if less then zero, go to error
			ret							; else return rax
error:
			mov rdx, rax				; copy rax in rdx
			call __errno_location		; get address of errno variable
			neg	rdx						; make rdx positive
			mov [rax], rdx 				; move rdx to rax address
			mov rax, -1					; return -1
			ret
