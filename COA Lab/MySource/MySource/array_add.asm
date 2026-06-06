.model small
.stack 100h

.data
    array1  db 10, 20, 30, 40, 50
    array2  db 1,  2,  3,  4,  5
    result  db 5 dup(0)
    size    equ 5           

.code
main proc
    mov ax, @data
    mov ds, ax
    mov cx, size            
    mov si, offset array1   
    mov di, offset array2   
    mov bx, offset result   

add_arrays:
    mov al, [si]           
    add al, [di]            
    mov [bx], al             
    
    inc si                   
    inc di                   
    inc bx                  
    loop add_arrays         

 
    mov ax, 4C00h
    int 21h
main endp
end main
