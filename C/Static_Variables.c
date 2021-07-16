/* Some basic uses 7
[Static Variables] */


#include <stdio.h>

/* 
Variables can be declared as static to increase their scope up to file containing them. 
As a result, these variables can be accessed anywhere inside a file.

While static variables have scope over the file containing them making them accessible only 
inside a given file, global variables can be accessed outside the file too.

    - If a variable in a function is not static, it will drop from the memory.
    - By default, functions are global in C. 
    - If we declare a function with static, the scope of that function is reduced to the file containing it.
*/

   /* static function */
   static int sum (int num) {
       /* static variable */
       static int total = 0;
       total += num;
       return total;
   }

   int main() {
       printf("%d ",sum(55));
       printf("%d ",sum(45));
       printf("%d ",sum(50));
       return 0;
   }