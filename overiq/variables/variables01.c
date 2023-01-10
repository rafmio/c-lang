#include <stdio.h>

int main()
{
	int a = 100;
	{
		int a = 10;
		printf("Inner a = %d\n", a);	
	}

	printf("Outer a = %d\n", a);

	return 0;
}
