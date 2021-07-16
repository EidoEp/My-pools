
/* Some basic uses 2
[arrays, multi-dimensional arrays, for loop, increment/decrement variables] */

#include<stdio.h>

int main() {

/* Regular Arrays */

int numbers[10]; /* This array is from 0-9 */

/* populate the array */
numbers[0] = 10;
numbers[1] = 20;
numbers[2] = 30;
numbers[3] = 40;
numbers[4] = 50;
numbers[5] = 60;
numbers[6] = 70;

printf("The 7th number in the regular array is %d \n", numbers[6]);
    
/* Multi-dimensional Arrays */

char MultiDarray[3][4] = {
    {'a','b','c','d'},
    {'e','f','g','h'},
    {'i','j','k','l'}
};

printf("The 2nd row and 3rd column in Multi-dimensional array is %c", MultiDarray[0][1]);

/* An Example */

		int grades[2][5];
		float average;
		int i;
		int j;

		grades[0][0] = 80;
		grades[0][1] = 70;
		grades[0][2] = 65;
		grades[0][3] = 89;
		grades[0][4] = 90;

		grades[1][0] = 85;
		grades[1][1] = 80;
		grades[1][2] = 80;
		grades[1][3] = 82;
		grades[1][4] = 87;

		for (i = 0; i < 2; i++) {
			average = 0;
			
			for (j = 0; j < 5; j++) {
				average += grades[i][j];
			}

			average /= 5.0;
			printf("The average marks obtained in subject %d is: %.2f\n", i, average);
		}

return 0;
}