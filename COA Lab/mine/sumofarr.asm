.model small
.stack 100h

.data
    arr1 db 1,2,3,4,5,6
    sum db 0
    len dw 6
.code 
main proc
    mov ax, @data
    mov ds, ax
    
    mov cx, len
    mov si, 0
    
    mov al, 0  
    
next:
    add al, arr1[si]
    inc si
    loop next
    
    mov sum, al
    mov ah, 4ch
    int 21h
main endp     
end main