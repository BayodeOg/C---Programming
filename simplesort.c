/**
 * Examples of code that uses arrays as well as the
 * file input, output function calls
 */

#include <stdio.h>
#define MAX 10	/* Assume that there is a max number of integers the program will read */

/**
 * main - Entry point
 * Description: Program that sorts a simple list of integers that user
 * enters from the terminal window
 *
 * Return: Always 0
 */
int main(void)
{
	int data[MAX]; /* this will give index from 0-9 */
	int i, j, tmp;	/* these are loop variables for sorting */

	/* Read in some data from standard input */

	for (i=0; i<MAX; i++)
	{
		printf("Enter item #%d: ", i);
		scanf("%d", &data[i]);
	}

	printf("You've entered the following items:\n");
	for (i=0; i<MAX; i++)
	{
		printf("item #%d: %d\n", i, data[i]);
	}

	/* simple sort */

	for (i=0; i<MAX; i++)
	{
		for (j=i; j<MAX; j++)
		{
			if (data[i] > data[j])
			{
				tmp = data[i];
				data[i] = data[j];
				data[j] = tmp;
			}

		}

	}

	printf("\nSorted data:\n");
        for (i=0; i<MAX; i++)
	{
		printf("item #%d: %d\n", i, data[i]);
	}

	return (0);
}
