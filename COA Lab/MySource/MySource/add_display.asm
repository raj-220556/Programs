.model small
.stack 100h

.data
    num1 dw 5 ; First number
    num2 dw 3 ; Second number
    result dw 0 ; To store the result

.code
main proc
    mov ax, @data
    mov ds, ax

    mov ax, num1 ; Load first number into AX register
    add ax, num2 ; Add second number to AX register

    mov result, ax ; Store the result

    ; Exit program
    mov ah, 4Ch
    int 21h
main endp
end main
