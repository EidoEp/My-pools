



; Understanding IP - Instruction Pointer:

IDEAL							
MODEL small						
STACK 100h						
DATASEG 						
CODESEG							
start:							
	mov ax, @data 		;						--> cs: 0000		The diffrence between the current amount of bytes and the next indicates how much bytes it takes in order to use the prvious command.
	mov ds, ax			;						--> cs: 0003		For example, using the command 'mov ds, ax' takes 2 bytes [0005 - 0003]. 
	mov ax, 1234h 		; 4660 in decimal. 		--> cs: 0005
	mov bx, 0			;						--> cs: 0008
	mov bl, 34h			; 52 in decimal. 		--> cs: 000B
	mov cx, 0 			;						--> cs: 000D
	mov ch, 12h			; 18 in decimal. 		--> cs: 0010
exit:
	mov ax, 4c00h		; 19,456 in decimal.
	int 21h				; 33 in decimal.
END start