#include <stdio.h>

/**
 * main - Entry point
 * Description: These lines of codes give the sizes of the
 * machine you're using by using the sizeof().
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));

	return(0);
}
