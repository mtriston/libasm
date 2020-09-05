global _ft_strcmp

section .text

_ft_strcmp:
			xor		rcx, rcx				; rcx = 0; (counter)
			cmp		rdi, rsi				; if s1 == s2	
			jz		equal					;	return (0)
while:
			cmp		byte [rsi + rcx], 0		; if (s1[i] == 0)
			jz		compare					; go to 'compare' label
			cmp		byte [rdi + rcx], 0		; if (s2[i] == 0)
			jz		compare					; go to 'compare' label
			mov		dl, byte [rdi + rcx]	; temp = s1[i]
			cmp		dl, byte [rsi + rcx]	; if (temp != s2[i])
			jg		bigger					;	if temp > s[2], go to 'bigger' label
			jl		lower					;	if temp < s[2], go to 'lower' label
			inc		rcx						; rcx++ (counter++)
			jmp		while					; go to 'while' label (cycle)
compare:
			mov		dl, byte [rdi + rcx]	; temp = s1[i]
			cmp		dl, byte [rsi + rcx]	; compare s1[i] and s2[i]
			jz		equal					; if s1[i] == s2[i], go to 'equal'
			jg		bigger					; if s1[i] > s2[i], go to 'bigger'
			jl		lower					; if s1[i] < s2[i], go to 'lower'

bigger:
			mov		rax, 1					; return (1);
			ret
lower:
			mov		rax, -1					; return (-1);
			ret
equal:
			mov		rax, 0					; return (0);
			ret

