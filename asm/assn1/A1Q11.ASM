.model small
.stack 100h
.data
.code

main proc

mov ax, @data
mov ds, ax
mov ax, 2222h
mov bl, 55h
div bl

mov si, 0060h
mov [si], al ; not sure about this, ask sir if quotient is 16bits or 8bits
add si, 2
mov [si], ah

int 03h
mov ah, 4ch
int 21h

main endp
end main
