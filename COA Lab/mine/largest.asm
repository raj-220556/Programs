.model small
.stack 100h

.data
	arr db 1,2,3,4,5
	largest db 0

.code
main proc
	mov ax, @data
	mov ds, ax

	mov si, 0
	mov cx, 8
	
	mov al, arr[si]  

next:
    mov bl, arr[si]
    cmp bl, al
    jbe skip
    
    mov al, bl
    
skip:
    inc si
    loop next
    
	        
	mov largest, al

    mov ah, 4ch
    int 21h
main endp
end main