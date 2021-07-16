/* Some Advanced uses 1
[Pointers] */
#include <stdio.h>
/* 

Used for;

* Strings
* Dynamic memory allocation
* Sending function arguments by reference
* Building complicated data structures
* Pointing to functions
* Building special data structures (i.e. Tree, Tries, etc...)

A pointer is essentially a simple integer variable which holds a memory address 
that points to a value, instead of holding the actual value itself.

*/
int main() {
/* ### Strings as Pointers ### */
char * name = "John";
/*
does three things:
- It allocates a local (stack) variable called name, which is a pointer to a single character.
- It causes the string "John" to appear somewhere in the program memory (after it is compiled and executed, of course).
- It initializes the name argument to point to where the J character resides at (which is followed by the rest of the string in the memory).
*/



/* ### De-referencing ### 

the act of referring to where the pointer points, instead of the memory address. 
We are already using dereferencing in arrays.
Dereferencing a pointer is done using the asterisk operator [*].
*/

/* define a local variable a */
int a = 2;
/* define a pointer variable, and point it to -a- using the & operator */
int * pointer_to_a = &a;
/* we just changed the variables */
a += 2;
*pointer_to_a += 2;
/* The vaalue of -a- is 6 and it will be presented from both calls */
printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *pointer_to_a);

return 0;
}