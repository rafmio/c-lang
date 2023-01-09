#include <stdio.h>

int main() 
{
	int i, j;

	for(i = 1; i < 5; i++)
	{
		printf("Outer for loop, i = %d\n", i);

		for (j = 1; j < 5; j++)
		{
			if(j == 3)
			{
				printf("Breaking out from the inner loop\n");
				break;	
			}
			printf("Inner for loop, j = %d\n", j);	
		}
		printf("\n");	
	}
	return 0;
}
