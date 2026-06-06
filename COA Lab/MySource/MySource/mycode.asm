; Hello World program for EMU8086
.model small
.stack 100h

.data
    message db 'Hello, World!$'

.code
main:
    ; Initialize data segment
    mov ax, @data
    mov ds, ax

    ; Display message
    mov ah, 09h
    lea dx, message
    int 21h

    ; Exit program
    mov ah, 4Ch
    int 21h

end main
