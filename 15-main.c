#include <stdio.h>

/**
 * main - More examples on pointer arithmetics
 *
 * Return: Always 0.
 */

int main(void)
{
	int a[5];
	int *p;
	int *p2;

	*a = 98; /* same as *(a + 0) */
	*(a + 1) = 198;
	*(a + 2) = 298;
	a[3] = 398; /* same as *(a + 3) */
	*(a + 4) = 498;

	printf("Address of 'a[0]': %p\n", &(*a));
	printf("Address of 'a[1]': %p\n", &(*(a + 1)));
	printf("Address of 'a[2]': %p\n", &(*(a + 2)));
	printf("Address of 'a[3]': %p\n", &(*(a + 3)));
	printf("Address of 'a[4]': %p\n", &(*(a + 4)));
	
	printf("a[0]: %d\n", (*a));
	printf("a[1]: %d\n", (*(a + 1)));
	printf("a[2]: %d\n", (*(a + 2)));
	printf("a[3]: %d\n", (*(a + 3)));
	printf("a[4]: %d\n", (*(a + 4)));


	p = a + 1;
	*p = 98;
	p2 = a + 3;
	*p2 = *p + 1337;
	printf("p: %p\n", &p);
	printf("*p: %p\n", p);
	printf("p2: %p\n", &p2);
	printf("*p2: %p\n", p2);

	printf("a[1]: %d\n", (*(a + 1)));
	printf("a[3]: %d\n", (*(a + 3)));


	return (0);

}
