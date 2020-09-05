global _ft_strcpy

section .text

_ft_strcpy:
			xor rcx, rcx					; rcx = 0; (counter)
while:
			cmp byte [rsi + rcx], 0			; if (rdi[i] == 0)
			jz end							; go to label 'end'
			mov dl, byte[rsi + rcx]
			mov byte [rdi + rcx], dl		; copy from rsi to rdi
			inc rcx							; counter++
			jmp while
end:
			mov byte[rdi + rcx], 0			; end of string
			mov rax, rdi
			ret	

