#include <stdio.h>

/**
 * main - Entry point
 * Description: These set of codes perform the arithmetic and
 * logical expressions.
 *
 * Return - Always 0 (Sucess)
 */

int main(void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;
	printf("a - b = %d\n", result);

	result = a * b;
	printf("a * b = %d\n", result);

	result = a / c;
	printf("a / c = %d\n", result);

	result = a + b * c; /* Precedence */
	printf("a + b * c = %d\n", result);

	result = a + (b * c) / d;
	printf("a + (b * c) / d = %d\n", result);

	return (0);

}
