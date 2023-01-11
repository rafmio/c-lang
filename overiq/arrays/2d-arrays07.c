#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
	int mat1[ROW][COL];
	int mat2[ROW][COL];
	int mat3[ROW][COL];
	int i, j;

	printf("Enter first matrix: \n\n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("Enter mat1[%d][%d]: ", i, j);
			scanf("%d", &mat1[i][j]);	
		}	
	}

	printf("Enter second matrix: \n\n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("Enter mat2[%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);	
		}	
	}	

	printf("Adding two matrix...");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];	
		}	
	}

	printf("\nResultant array: \n");
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%5d ", mat3[i][j]);
		}	
		printf("\n");
	}

	return 0;
}
