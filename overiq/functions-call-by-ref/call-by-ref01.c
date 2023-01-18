#include <stdio.h>

void try_to_change(int, int);

int main()
{
	int x = 10;
	int y = 20;

	printf("Init value of x = %d\n", x);
	printf("Init value of y = %d\n", y);

	printf("\nCalling the function...\n");
	
	try_to_change(x, y);

	printf("Final value of x = %d\n", x);
	printf("Final value of y = %d\n", y);

	return 0;
}

void try_to_change(int x, int y)
{
	x = x * 10;
	y = y * 10;

	printf("\nValue of x inside funcion = %d\n", x);
	printf("Value of y indise function = %d\n", y);
}
