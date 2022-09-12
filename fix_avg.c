#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that reads a fixed number of integer
 * values from standard input and computes average.
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	int i, numberofNums = 0, total = 0, value;
	float average;

	printf("How many numbers are to be read?");
	scanf("%d", &numberofNums);

	for(i=0; i<numberofNums; i++) {
		scanf("%d", &value);
		total += value; /* total = total + value */
		printf("Read %d\n", value);
	}

	average = (float) total / (float) numberofNums;
	printf("You read %d value and the average is %f.\n", numberofNums, average);
	return(0);


}
