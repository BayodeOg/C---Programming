/**
 * Examples of code that uses arrays as well as the
 * file input, output function calls
 */

#include <stdio.h>
#define MAX 10	/* Assume that there is a max number of integers the program will read */

/**
 * main - Entry point
 * Description: Program that sorts a simple list of integers from a file in terminal called input.txt. Also, the file will be written to an output file called output.txt
 *
 * Return: Always 0
 */
int main(void)
{
	int data[MAX]; /* this will give index from 0-9 */
	int i, j, tmp;	/* these are loop variables for sorting */
	FILE *fp;

	/* Read in some data */

	fp = fopen("input.txt","r");
	if (fp == NULL)
	{
		printf("Could not open file.\n");
		return (0);
	}

	for (i=0; i<MAX; i++)
	{
		fscanf(fp, "%d", &data[i]);
	}

	fclose(fp);

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

	fp = fopen("output.txt","w");
	if (fp == NULL)
	{
		printf("Could not open output.txt for writing.\n");
		return (0);
	}

	fprintf(fp, "\nSorted data:\n");
        for (i=0; i<MAX; i++)
	{
		fprintf(fp, "item #%d: %d\n", i, data[i]);
	}
	fclose(fp);

	return (0);
}
