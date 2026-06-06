.model small
.stack 100h
.data
    num dw 6
    result dw 1
    
.code
main proc
    mov ax, @data
    mov ds, ax
    
    mov ax, 1 
    mov cx, num
next:
    mul cx
    loop next
            
    mov result, ax
    mov ah, 4ch
    int 21h

main endp
end main