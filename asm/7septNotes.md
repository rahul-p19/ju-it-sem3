## Multiplication

MUL - multiplication of byte/word with AL/AX

MUL BL ; multiplies BL with AL and stores in AX (8bit * 8bit = 16bit)

MUL BX ; multiplies BX with AX and stores in DX and AX (because 16bit *16 bit = 32 bit)

IMUL BL; multiplication for signed numbers, stored in AH and AL
CBW ; convert byte to word. copies signed bit of AL to each bit of AX
CBD ; if multiplying 16bits, use convert byte to double. copies signed bit of AX to all bits of DX

## Division

DIV ; division of AX by 8bit or DX-AX by 16bit

DIV BL; division of AX by BL
; quotient is stored in AL, remainder in AH

IDIV ; for division of signed numbers

## Finding specific number from string of databytes

SCASB ; used to search a specific value in your string byte
; to use this, ES should be the data segment 
; DI should be the line object/offset address
; data to be found should be in AL
; output will be reflected in Z Flag



