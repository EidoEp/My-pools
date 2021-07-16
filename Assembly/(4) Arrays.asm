

; Defining Arrays:


IDEAL							
MODEL small						
STACK 100h						
DATASEG
	ArrayName SizeOfElement N dup (?)		; ArrayName 	- The name of the array.
											; SizeOfElement - Determins the memory size allocated [db, dw, dd].
											; N 			- The number of "slots" in the array.
											; dup (?) 		- Short for duplicate, instead of the '?' mark, we can assign it with a value which will be allocated to all of the array 'slots'.
											; 				  The formata for 'dup (?)' - (Int) OR (Int, Int, ...)

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
	Array db 0AAh, 0BBh, 0CCh, 0DDh, 0EEh, 0FFh		; We defined an array with a few values. 

CODESEG							
start:							
	mov ax, @data 				
	mov ds, ax
	mov al, [Array+2] 								; Copying the value of 'Array' in index 2 to the 'al' register.
	mov [Array+1], al 								; Copying the value of the 'al' register to index 1 in 'Array'.
				
exit:
	mov ax, 4c00h		
	int 21h				
END start


----------------------------------------------------------------


IDEAL							
MODEL small						
STACK 100h						
DATASEG
	Array db 0AAh, 0BBh, 0CCh, 0DDh, 0EEh, 0FFh		

CODESEG							
start:							
	mov ax, @data 				
	mov ds, ax
	mov ax, [Array+2] 								; This command will not work since the source values are defined by byte ('db') and our destination is a word ('ax' => 16bit).
	mov ax, [word ptr Array+2]						; This command will work- We "notify" the assembler to consider the memory we refer to not as a Byte, but as a word.
													  The output for this code will be- DDCCh.
exit:
	mov ax, 4c00h		
	int 21h				
END start


----------------------------------------------------------------


	* When we want to pass an array parameter to a function we have two options;

		1. Using the "Pass By Value" method;

			- Requires you to 'push' each value of the array to the stack.
			- Takes alot of space in the stack.
			- The function cannot change the values of the original array.

		2. Using the "Pass By Refrence" method;

			- You need to specify only the first memory address of the array.
			- You need to specify the number of values you have in the relevant array.

		


















