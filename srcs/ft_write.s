extern __errno_location

global _ft_write

section .text

_ft_write:
			mov rax, 1
			syscall
			cmp rax, 0
			jl error
			ret
error:
			mov rdx, -1
			mul rdx
			mov rdx, rax
			call __errno_location
			mov dword [rax], edx
			mov rax, -1
			ret
