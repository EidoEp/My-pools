/* Some basic uses 6
[functions] */

#include <stdio.h>

/* 
    - Functions receive either a fixed or variable amount of arguments.
    - Functions can only return one value, or return no value. 
    - Variables cannot be called from another function without a pointer.
    - You must define a function before using it (By declare or by Order).
    - Functions with 'void' don't have to return a value.

    ### Related to static ###
    - If a variable in a function is not static, it will drop from the memory.
    - By default, functions are global in C. 
    - If we declare a function with static, the scope of that function is reduced to the file containing it.
*/ 

int main() {

  /* function declaration */
  void print_big(int number);

  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

void print_big(int number){
    if(number > 10){
        printf("%d is big\n",number);
    }
}