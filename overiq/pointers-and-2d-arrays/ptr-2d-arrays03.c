#include <stdio.h>

int main()
{
	int arr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{12, 23, 34, 45}	
	};

	int i, j;
	int (*p)[4];

	p = arr;

	for(i = 0; i < 3; i++)
	{
		printf("Address of %d-th array %u\n", i, p + i);
		for(j = 0; j < 4; j++)
		{
			printf("arr[%d][%d] = %d\n", i, j, *( *(p + i) + j) );	
		}	
		printf("\n");
	}

	return 0;
}
