.model small
.stack 100h
.data
    arr db 1,2,3,4,5,6,7,8,9,10
    even db 10 dup(?)
    odd db 10 dup(?)
    len dw 10

.code
main proc
    mov ax,@data
    mov ds, ax
    
    mov si, 0     ;input array index
    mov di, 0     ;odd array index
    mov bx, 0     ;even array index
    
    mov cx, len
    
next:
    mov al, arr[si]
    inc si
    test al, 1      ; bitwise and (01010 & 00001
    jz store_even   ; if zero, it is even
store_odd:
    mov odd[di], al
    inc di
    jmp continue
    
store_even:
    mov even[bx], al
    inc bx
continue:
    loop next
    
    mov ah, 4ch
    int 21h
main endp
end main
    
    
    