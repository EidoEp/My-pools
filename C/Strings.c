/* Some basic uses 4
[String manipulations] 

In #C, string are a set of arrays.

*/

#include<stdio.h>
#include<string.h>

int main() {

/* string basics */
    int age = 30;
    char * name1 = "Eido Epstein"; /* Read only, can't manipulate */
    
    char name2[] = "Eido Epstein"; /* Can be manipulated */

    /* Same as; */
    char name3[11] = "John Smith";
    /* The string lentgh is 10, we add 1 due to string termination; 
    A special character (equal to 0) which indicates the end of the string.  */

/* String lentgh */
printf("%s is %d years old.\nThe number of char in Eido Epstein -> %d \n\n", name1, age, strlen(name2));

/* String comparison */
if (strncmp(name1, "Eido", 4) == 0) {
    printf("Hello, Eido!\n");
} else {
    printf("You are probably not Eido!\n");
}

/* String Concatenation */
char dest[20]="Hello";
char src[20]="World";

strncat(dest,src,1);
printf("%s\n",dest); /* Displaying the first char from src that we added to dest */

strncat(dest,src,2);
printf("%s\n",dest);

return 0;
}