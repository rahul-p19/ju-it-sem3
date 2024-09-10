.model small
.stack 100h
.data
.code

main proc
mov ax, @data
mov ds, ax
mov si, 0030h
mov cx, 0005h
mov ax, 0000h
mov bl, 0000h

l2: add al,[si]
daa
jnc l1
inc bl
l1: inc si
loop l2

mov si, 0040h
mov [si], al
inc si
mov [si], bl

int 03h
mov ah, 03h
mov ah, 4ch
int 21h

main endp
end main
