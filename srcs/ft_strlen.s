global _ft_strlen

section .text

_ft_strlen:
			xor	rax, rax		 		; rax = 0 (counter)
while:
			cmp byte [rdi + rax], 0		; if (str[i] == 0)
			jz end						; if true go to 'end' label
			inc rax						; increment rax (counter)
			jmp while					; go to 'while' label

end:
			ret							; return
; //TODO: add check NULL argument
