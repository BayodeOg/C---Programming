#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that uses the standard inputs and outputs to
 * print out initials and age.
 *
 * Result: Always 0 (Success)
 *
 */

int main(void)
{
	char f,m,l;
	int age;
	
	printf("Enter your intiails, followed by age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initials are: %c%c%c and my age is %d.\n", f, m, l, age);
	return (0);
}
