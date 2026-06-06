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
next:
	cmp bx, 0
	je exit
	mov dx, 0
	div bx
	
	mov ax, bx
	mov bx, dx
	jmp next
exit:	
	mov result, ax
	
	mov ah, 4ch
	int 21h
main endp
end main