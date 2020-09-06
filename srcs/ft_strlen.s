global _ft_strlen

section .text

_ft_strlen:									; ft_strlen(char *str = rdi)
			xor		rax, rax		 		; rax = 0 (counter)
			test	rdi, rdi				; if rdi == 0 go to end
			jz		end
while:
			cmp 	byte [rdi + rax], 0		; if (str[i] == 0)
			jz 		end						; if true go to 'end' label
			inc 	rax						; increment rax (counter)
			jmp 	while					; go to 'while' label

end:
			ret								; return
