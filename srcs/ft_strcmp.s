global _ft_strcmp

section .text

_ft_strcmp:
		xor rax, rax			; rax = 0
		xor rdx, rdx			; rdx = 0

loop:	mov al, byte [rdi]		; al = dest[i]
		mov	dl, byte [rsi]		; dl = src[i]
		sub	rax, rdx			; al - dl
		jnz	endloop				; if non zero go to endloop
		test dl, dl				; if src[i] == 0
		jz endloop				; 	go to endloop
		inc rdi					; increment dest
		inc rsi					; increment src
		jmp loop
endloop:
		cmp rax, 0
		jl lower
		jg bigger
		ret
lower:
		mov	rax , -1
		ret
bigger:
		mov rax, 1
		ret
		
