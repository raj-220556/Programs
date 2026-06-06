.model small
.stack 100h
.data
	arr db 1,2,3,4,5,6,7
	num db 3
	index dw ?
	msg db "Found at $"
.code
main proc
	mov ax, @data
	mov ds, ax

	mov al, num
	mov si, 0
	mov cx, 7
compare:
	cmp al, arr[si]
	je exit
	inc si
	loop compare
exit: 
	mov index, si
	mov ah, 4ch
	int 21h
