#include <stdio.h>

int sum(int x, int y)
{
	int s;
	s = x + y;
	return s;
}

int main() 
{
	printf("sum = %d\n", sum(10, 10));

	return 0;
}
