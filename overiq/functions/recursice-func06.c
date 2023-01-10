#include <stdio.h>

void rec();

int main() 
{
	rec(1);
	return 0;
}

void rec(int n)
{
	printf("Winding phase: Level = %d\n", n);
	if (n < 3)
	{
		rec(n + 1);	
	}
	printf("Unwinding phase: Level = %d\n", n);
}
