



// How parameters are being pushed to a stack in x86 and x64

// -------------------------------------------------------------------

// #### Code in 'C' x86 ####
void func1_eido(first_n,last_n,pet){
	printf("Eido's function 1\n");
}


// #### Assembly ####
// Intel x86 (Mostly cdecl):
push ebp
mov ebp, esp
......
push pet
push last_n
push first_n


// -------------------------------------------------------------------


// #### Code in 'C' x64 ####

void func2_eido(first_n,last_n,pet,address,city,country){
	printf("Eido's function 2\n");
}


// #### Assembly ####
// Intel x64 (Mostly stdcall):
push ebp
mov ebp, esp
......
mov [ebp + 4], country 
mov [ebp + 8], city 
mov [ebp + 12], address 
mov [ebp + 16], pet
push last_n
push first_n 

// -------------------------------------------------------------------
