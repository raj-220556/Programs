.model small
.stack 100h
.data
	arr db 1,2,3,4,5,6
	len dw 6
	index dw ?
	num db 4
	found_msg dw "Found$"
	not_msg dw "Not Found$"

.code
main proc
	mov ax, @data
	mov ds, ax

	mov cx, len
	mov si, 0

	mov al, num
search:
	cmp al, arr[si]
	je found
	inc si
	loop search
not_found:
	mov dx, offset not_msg
	mov ah, 09h
	int 21h
	jmp exit
found:
	mov dx, offset found_msg
	mov index, si
	mov ah, 09h
	int 21h
exit:
	mov ah, 4ch
	int 21h
main endp
end main




