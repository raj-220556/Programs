.model small
.stack 100h
.data

	arr dw 2,3,4,5,6,7,8,9
	num dw 5
	index dw ?
	low dw 0
	high dw 7
.code
main proc
	mov ax, @data
	mov ds, ax
	
	mov ax, num
	mov si, 0
	mov cx, low
	mov dx, high

compare:
	cmp cx, dx
	jg not_found
	
	mov bx, cx
	add bx, dx
	shr bx, 1

	mov si, bx
	shl si, 1
	
	
	cmp ax, arr[si]
	je found
	cmp ax, arr[si]
	jb less
	mov cx, bx
	inc cx
	jmp compare
less:
	mov dx, bx
	dec dx
	jmp compare
found: 
	mov index, bx
	jmp exit
not_found:
	mov index, -1
exit:
	mov ah, 4ch
	int 21h
main endp
end main
	
	