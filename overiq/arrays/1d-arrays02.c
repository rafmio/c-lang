#include <stdio.h>

int main()
{
	int arr[5];
	int i, s = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Enter a[%d]: ", i);
		scanf("%d", &arr[i]);	
	}

	for (i = 0; i < 5; i++)
	{
		s += arr[i];	
	}

	printf("\nSum of elements = %d\n", s);

	return 0;
}
