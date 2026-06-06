.model small
.stack 100h
.data
	num1 dw 10
	num2 dw 15
	result dw ?

.code
main proc
	mov ax, @data
	mov ds, ax

	mov ax, num1
	mov bx, num2

	cmp bx, 0
	je exit
compare:
	mov dx, 0
	div bx
	cmp dx, 0
	je next
	mov ax, bx
	mov bx, dx
	jmp compare

next:
	mov ax, bx
exit:
	mov result, ax
	mov ah, 4ch
	int 21h
main endp
end main