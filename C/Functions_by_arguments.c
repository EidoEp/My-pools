/* Some Advanced uses 3
[Function arguments by reference, Pointers to structures] */

#include <stdio.h>

/*
Assumingly you're already know pointers and functions, so you are aware of that function 
arguments are passed by value, which means they are copied in and out of functions. 
But what if we pass pointers to values instead of the values themselves? 
This will enable us to give functions control over variables and structures of 
the parent functions, and not just a copy of them, thus directly reading and writing the original object.
*/

void addone(int *n) {
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}


int main() {

    int n;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);

/* Notice that when calling the -addone- function, we must pass a reference to 
the variable -n-, and not the variable itself - This is done so that the function knows the address 
of the variable, and won't just receive a copy of the variable itself. */


    return 0;
}


/* ### Pointers to structures ### */

/* Let's say we want to create a function which moves a point forward in both -x- and -y- directions, called move. 
Instead of sending two pointers, we can now send only one pointer to the function of the point structure: */

void move(point * p) {
    (*p).x++;
    (*p).y++;
}

/* However, if we wish to dereference a structure and access one of it's internal members, we have a
 shorthand syntax for that, because this operation is widely used in data structures.
  We can rewrite this function using the following syntax: */

void move(point * p) {
    p->x++;
    p->y++;
}


/* ############# Example ################ */

#include <stdio.h>

typedef struct {
  char * name;
  int age;
} person;

/* function declaration */
void birthday(person * p);

void birthday(person * p){
    p->age++; // This is the same..	
    //(*p).age++; // ... as this would be
}

int main() {
  person john;
  john.name = "John";
  john.age = 27;

  printf("%s is %d years old.\n", john.name, john.age);
  birthday(&john);
  printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

  return 0;
}