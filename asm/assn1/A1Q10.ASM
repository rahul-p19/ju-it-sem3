.model small
.stack 100h
.data
.code

main proc
mov ax, @data
mov ds, ax
mov ax, 88h
mov bl, 33h
div bl
mov si, 0060h
mov [si],al
inc si
mov [si], ah

int 03h
mov ah, 4ch
int 21h

main endp
end main
