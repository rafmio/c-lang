#include <stdio.h>

void mult_ret(int a, int b, int *sum, int *diff, int *prod);

int main()
{
	int x = 40;
	int y = 10;
	int sum, diff, prod;

	mult_ret(x, y, &sum, &diff, &prod);

	printf("%d + %d = %d\n", x, y, sum);
	printf("%d - %d = %d\n", x, y, diff);
	printf("%d * %d = %d\n", x, y, prod);

	return 0;
}

void mult_ret(int a, int b, int *sum, int *diff, int *prod)
{
	*sum = a + b;
	*diff = a - b;
	*prod = a * b;
}

