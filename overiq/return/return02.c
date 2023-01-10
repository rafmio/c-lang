#include <stdio.h>

int factorial(int x);

int main() 
{
	int n;
	printf("Calculate factorial: \n\n");
	printf("Enter number: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("\nFactorial is only defined for positive numbers\n");	
	}
	else 
	{
            	printf("\n%d! = %d\n", n, factorial(n));	
	}

	return 0;
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;	
	}

	int f = 1, i;

	for (i = n; i > 0; i--)
	{
		f = f * i;	
	}

	return f;
}
