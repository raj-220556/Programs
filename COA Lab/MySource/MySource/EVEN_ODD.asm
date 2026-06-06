.model small
.stack 100h

.data
    num dw 7 ;
    result db ? ;

.code
main proc
    mov ax, @data
    mov ds, ax

    mov ax, num ; 
    and ax, 1 ; 

    cmp ax, 0 ;
    je even ; 

odd:
    mov result, 1 ; 
    jmp end_check ; 

even:
    mov result, 0 ;

end_check:
    mov ah, 4Ch
    int 21h
main endp
end main