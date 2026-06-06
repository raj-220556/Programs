.model small
.stack 100h
.data
	arr dw 5,4,2,3,1
	len dw 5
	
.code
main proc
	mov ax, @data
	mov ds, ax
	
	mov cx, len
outter:
	mov si, 0
inner:
	mov di, si
	add di, 2
	mov ax, arr[si]
	mov bx, arr[di]
	
	cmp ax, bx
	ja swap
cond:
	add si, 2
	cmp si, 8
	jge next
	jmp inner
swap:
	mov arr[si], bx
	mov arr[di], ax
	jmp cond

next:
	loop outter
	mov ah, 4ch
	int 21h
main endp
end main
	
	