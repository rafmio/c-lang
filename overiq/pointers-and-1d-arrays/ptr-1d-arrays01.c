#include <stdio.h>

int main() 
{
	int  my_arr[5] = {1, 2, 4, 34, 12};
	int i;
	for(i = 0; i < (sizeof(my_arr) / sizeof(my_arr[0])); i++)
	{
		printf("Value of a[%d] = %d\t", i, my_arr[i]);
		printf("Address of a[%d] = %u\n", i, &my_arr[i]);		
	}

	printf("\n");
	printf("sizeof(my_arr): %d\n", sizeof(my_arr));

	return 0;
}
