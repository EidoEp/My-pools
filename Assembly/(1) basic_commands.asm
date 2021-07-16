



; Understanding some basic assembly commands:

IDEAL							; A writing form in TASM
MODEL small						; Represent the code model you are using, in our case 'small' => Data, code, stack and each segment size is 64k.
STACK 100h						; The stack size.
DATASEG 						; In this section we assign to variables memory, the Data Segment.
; -------------------------
; Your variables here
; -------------------------
	var1 db 5					; In this case, we gave the variable 'var1' the value of 5, memory will be automatically allocated.

CODESEG							; In this section we write the code we want the processor to run, the Code Segment.
start:							; Signels the processor from where to run the code, you can also write any other name for it, like 'main'.
	mov ax, @data 				; The purpose of this line and the next one: 
	mov ds, ax					; To determine that 'ds' will point to the data segment- By getting the data memory address using '@data' and copying it to 'ax', after that, copying ac content to 'ds'.
; -------------------------
; Your code here
; -------------------------
	mov al, [var1]				; In this section we are copying 'var1' value (5) to the 'al' register.

exit:							; Making sure we are properly exiting our code, the next 2 lines are for releasing the memory space that was used by our code. More details when we'll get to DOS.
	mov ax, 4C00h
	int 21h
END start						; The compilation of the program will stop, the code will end its run.