
/* Some basic uses 1
[Bool, packages, data types, variables, calculations, printf variables] */

/* Packages to pull from */
#include<stdio.h>

/* You need to set values for Boolean */
#define BOOL char
#define FALSE 0
#define TRUE 1

/* Data Types;

# Integers - whole numbers which can be either positive or negative. Defined using; char, int, short, long or long long.

# Unsigned integers - whole numbers which can only be positive. Defined using unsigned; char, unsigned int, unsigned short, unsigned long or unsigned long long.
 
# Floating point numbers - real numbers (numbers with fractions). Defined using; float and double.

# Structures - Will be explained later, in the Structures section. */

int main() {
    printf("My first #C code \n");
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;   /* will print 1-2+3*4 = 11 */
    printf("%d", a);     /* https://www.log2base2.com/C/basic/printing-value-of-a-variable.html */
    return 0;
}
