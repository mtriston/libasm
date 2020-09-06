extern _ft_strlen
extern _ft_strcpy
extern malloc

global _ft_strdup			; char *str = rdi

section .text

_ft_strdup:

		test rdi, rdi
		jz error
		push rdi			; save str on stack
		call _ft_strlen
		mov rdi, rax		; move len of str in rdi
		inc rdi				; +1 for \0
		call malloc
		test rax, rax
		jz error
		mov rdi, rax		; move pointer of allocated memory in rdi
		pop rsi				; get old rdi on stack
		call _ft_strcpy
		ret

error:	
		mov rax, 0
		ret
