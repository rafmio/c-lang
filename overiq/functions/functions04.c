#include <stdio.h>

int max(int x, int y);

int main()
{
	max(100, 12);
	max(10, 120);
	max(20, 20);

	return 0;
}

int max(int x, int y)
{
	if(x > y)
	{
		printf("%d > %d\n", x, y);	
	}
	else if(x < y)
	{
		printf("%d < %d\n", x, y);	
	}
	else 
	{
		printf("%d == %d\n", x, y);	
	}
}
