/* Some basic uses 3
[if comparioson, calling a function] */

#include<stdio.h>

/* A function of the last example */
void guessNumber(int guess) {
    // TODO: write your code here
    if (guess < 555) {
        printf("Your guess is too low.\n");
    } else if (guess > 555) {
        printf("Your guess is too high.\n");
    } else {
        printf("Correct. You guessed it!\n");
    }
}


int main() {

/* if uses */
/* Comparisons; <,>,!=,==,&&,|| */
int peanuts_eaten = 22;
int peanuts_in_jar = 100;
int max_peanut_limit = 50;

if (peanuts_in_jar > 80) {
    if (peanuts_eaten < max_peanut_limit) {
        printf("Take as many peanuts as you want!\n");
    }
}
else if (peanuts_eaten > peanuts_in_jar) {
        printf("You can't have anymore peanuts!\n");
}
else {
        printf("Alright, just one more peanut.\n");
}

/* An Example */

    guessNumber(500);
    guessNumber(600);
    guessNumber(555);


return 0;

}