#include <stdio.h>

int main()
{
	int arr[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter a[%d]: ", i);
		scanf("%d", &arr[i]);	
	}

	printf("\nPrinting elements of the array: \n");
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]: %d\n", i, arr[i]);	
	}

	return 0;
}
