#include <stdio.h>

void try_to_change(int *, int *);

int main()
{
	int x = 10; 
	int y = 20;

	printf("Init val x = %d\n", x);
	printf("Init val y = %d\n", y);
	printf("\nCalling the function...\n");

	try_to_change(&x, &y);

	printf("Values after function call: \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}

void try_to_change(int *x, int *y)
{
	(*x)++;
	(*y)++;
	*x = *x * 10;
	*y = *y * 10;
	printf("\nInside function x = %d\n", *x);
	printf("\nInside function y = %d\n", *y);
}
