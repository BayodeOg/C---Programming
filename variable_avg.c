#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that reads a fixed number of integer
 * values from standard input and computes average. Assumming
 * we don't know how many values we gonna read from std input
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	int i, numberofNums = 0, total = 0, valsRead, value;
	float average;

	valsRead = scanf("%d", &value);

	while(valsRead > 0) 
	{
		numberofNums++;
		total += value; /* total = total + value */
		printf("Read %d\n", value);
		valsRead = scanf("%d", &value);
	}

	average = (float) total / (float) numberofNums;
	printf("You read %d value and the average is %f.\n", numberofNums, average);
	return (0);

}
