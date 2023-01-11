#include <stdio.h>
#define SIZE 10

int main() 
{
	int my_arr[SIZE] = {34, 56, 67, 12, 54, 453, 23, 75, 17, 100};
	int i, max, min;

	max = min = my_arr[0];

	for(i = 0; i < SIZE; i++)
	{
		if(my_arr[i] > max)
		{
			max = my_arr[i];	
		}	
		if(my_arr[i] < min)
		{
			min = my_arr[i];	
		}
	}

	printf("Lowest value = %d\n", min);
	printf("Highest value = %d\n", max);

	return 0;
}
