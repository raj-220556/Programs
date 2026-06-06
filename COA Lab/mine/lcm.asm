.model small
.stack 100h
.data
	num1 dw 10
	num2 dw 15
	msg db "LCM = $"
	result dw ?
.code
main proc
	mov ax, @data
	mov ds, ax
	
	mov ax, num1
	mov bx, num2
	cmp ax, bx
	jge use_num1
	jmp start_lcm
use_num1:	
	mov bx, num1
start_lcm:
	mov ax, bx
	mov dx, 0
	div num1
	cmp dx, 0
	jne next
	mov ax, bx
	mov dx, 0
	div num2
	cmp dx, 0
	jne next
	jmp store_result
next:
	inc bx
	jmp start_lcm
store_result:
	mov result, bx
	mov dx, offset msg
	mov ah, 09h
	int 21h
	mov ax, bx
	call print_msg
	
	mov ah, 4ch
	int 21h
main endp

print_msg proc
	push ax
	push bx
	push cx
	push dx
	
	
	mov bx, 10
	mov cx, 0
convert:
	mov dx, 0	
	div bx
	push dx
	inc cx
	cmp ax, 0
	jne convert
display:
	pop dx
	add dl, 30h
	mov ah, 02h
	int 21h
	loop display

	pop dx
	pop cx
	pop bx
	pop ax

	ret
print_msg endp
	
end main