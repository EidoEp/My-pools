/* Some basic uses 5
[for loop, while loop] */

#include <stdio.h>

int main() {

/* 	for loop */
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;

  int i;

  for(i=0;i<10;i++){
    factorial *= array[i];
  }

  printf("10! is %d.\n", factorial);

/* while loop */
    int array2[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int j = 0;

    while (j < 13) {
      if(array2[j] < 5){
        j++;
        continue;
      } else if (array2[j] > 10){
          break;
      }

      printf("This number %d\n", array2[j]);
      j++;
    }

    return 0;

}