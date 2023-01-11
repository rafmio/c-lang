#include <stdio.h>

void new_array(int a[]);

int main()
{
	int my_arr[] = {13, 56, 71, 38, 93};
	int i;

	printf("Original array: \n");

	for(i = 0; i < 5; i++)
	{
		printf("%d ", my_arr[i]);
	}

	new_array(my_arr);

	printf("\n\nModified array: \n");

	for(i = 0; i < 5; i++)
	{
		printf("%d ", my_arr[i]);	
	}

	printf("\n");

	return 0;
}

void new_array(int a[])
{
	int i;
	for(i = 0; i < 5; i++)
	{
		a[i] = 2 * a[i];	
	}
}
