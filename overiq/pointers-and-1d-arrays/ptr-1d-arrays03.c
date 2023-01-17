#include <stdio.h>

#define SIZE 5

int main() 
{
	int my_arr[SIZE] = {1, 2, 3, 4, 5};
	int i;
	int *p;
	p = my_arr;
	
	for (i = 0; i < SIZE; i++)
	{
		printf("Value of   a[%d] = %d\t", i, *(p + i));
		printf("Address of a[%d] = %d\n", i,   p + i );
	}

	return 0;
}
