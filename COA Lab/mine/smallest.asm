.model small
.stack 100h
.data
	arr db 5,4,3,2,1
	result db ?
.code
main proc
	mov ax, @data
	mov ds, ax

	mov si, 0
	mov al, arr[si]
	inc si
	mov cx, 4
next:
	mov bl, arr[si]
	cmp al, bl
	jbe skip

	mov al, bl
skip:
	inc si
	loop next
	mov result, al
	mov ah, 4ch
	int 21h
main endp
end main                                                                                                                                                                                                                                                                                                                                                                              