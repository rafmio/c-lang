#include <stdio.h>

int main()
{
	int i = 1, sum = 0;

	for ( ; i <= 100; i++) 
	{
      		sum += i; 
	} 

	printf("Sum = %d\n", sum);

	return 0;
}
