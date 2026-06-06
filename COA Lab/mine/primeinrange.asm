.model small
.stack 100h
.data
    start db 1
    end db 20
    primes db 20 dup(?)
 
.code
main proc
    mov ax, @data
    mov ds, ax     
    
    mov bl, start   ;i
    mov cl, end     ;e
    mov si, 0
   
range:
    cmp bl, cl
    ja exit
    
    mov dl, 0   ; flag
    mov dh, 2    ;j  
inner:

    cmp dh, bl
    jae is_prime
    
    mov al, bl   
    mov ah, 0
    div dh  
    inc dh
    cmp ah, 0  ; ah=remainder, al=quotient
    je not_prime
    jmp inner 
    
is_prime:
    cmp dl, 0
    je store_prime
    inc bl
    jmp range
    
    
not_prime:
    mov dl,1  
    jmp is_prime
    
store_prime:
    mov primes[si], bl 
    inc si   
    inc bl
    jmp range
    
exit:
    mov ah, 4ch
    int 21h
main endp
end main
    