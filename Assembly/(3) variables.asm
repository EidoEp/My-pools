



; Defining Variables:



IDEAL							
MODEL small						
STACK 100h						
DATASEG
	ByteVarName db ?			; 'db' (define byte) signifies that 'ByteVarName' is allocated woth one byte. the '?' mark signifies that we only assign the variable with memory space (No value). But, the variable is not empty, it's assigned 
								  with a "grabage" value.
CODESEG							
start:							
	mov ax, @data 				; The purpose of this line and the next one: 
	mov ds, ax					; Details on this lines- If we weren't starting our code with assigning '@data' value, eventually to 'ds'. Calling 'age' will load the correct Offset but from a random segment and due to that, 'age' would have 	
								  recived "garbage" values.
	mov al, [ds: 1h]			; Example - Copy to 'al' the value in the 'ds' segment, located one byte after the start of the segment. 
	mov al, [age]				; Example - Copy to 'al' the value in the 'age' variable, which represents an address in the memory.
exit:
	mov ax, 4c00h		
	int 21h				
END start


----------------------------------------------------------------


IDEAL							
MODEL small						
STACK 100h						
DATASEG
	ByteVarName 		db ?		; Allocate Byte - 8 Bit, db - 'define bit' .
	WordVarName 		dw ?		; Allocate Byte - 16 Bit, dw - 'define word'.
	DoubleWordVarName   dd ?		; Allocate Byte - 32 Bit, dd - 'define double'.
								  
CODESEG							
start:							
	mov ax, @data 				
	mov ds, ax					
								
exit:
	mov ax, 4c00h		
	int 21h				
END start


----------------------------------------------------------------


IDEAL							
MODEL small						
STACK 100h						
DATASEG
	ByteVarName1 db 200 		; store the value 200 (C8h).
	ByteVarName2 db 10010011b 	; store the bits 10010011 (93h).
	ByteVarName3 db 10h 		; store the value 16 (10h).
	ByteVarName4 db 'B' 		; store the ASCII code of the letter B (42h).
	ByteVarName5 db -5 			; store the value -5 (0FBh).
	WordVarName dw 1234h 		; 34h in low address, 12h in high address.
	DoubleWordVarName dd -5 	; store -5 as 32 bit format (0FFFFFFFBh).
								  
CODESEG							
start:							
	mov ax, @data 				
	mov ds, ax					
								
exit:
	mov ax, 4c00h		
	int 21h				
END start


----------------------------------------------------------------


IDEAL							
MODEL small						
STACK 100h						
DATASEG
	ByteVarName db 'HELLO' 		; The assembler won't consider this as an error, instead,
								  It will create a string (Array) out of the variable.			
CODESEG							
start:							
	mov ax, @data 				
	mov ds, ax					
								
exit:
	mov ax, 4c00h		
	int 21h				
END start


	; The following code will be generated under the 'DATASEG' section:

		DATASEG
			ByteVarName1 db 'H'
			ByteVarName2 db 'E'
			ByteVarName3 db 'L'
			ByteVarName4 db 'L'
			ByteVarName5 db 'O'



