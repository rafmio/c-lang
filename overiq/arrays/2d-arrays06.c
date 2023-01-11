#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
	int arr[ROW][COL];
	int i, j;

	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("Enter arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);	
		}	
	}

	printf("\nEntered 2-D array is: \n\n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%3d ", arr[i][j]);	
		}	
		printf("\n");
	}
	
	return 0;
}
