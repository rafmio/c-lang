#include <stdio.h>

int main() 
{
	int i, num, flag = 1;

	printf("Enter a num: ");
	scanf("%d", &num);

	for (i = 2; i < num - 1; i++) 
	{
		if (num % i == 0)
		{
			flag = 0;	       
		} 	
	} 

	if (flag == 1)
	{
		printf("%d is prime\n", num);	
	}

	else 
	{
		printf("%d is not prime prime\n", num); 
	}

	return 0;
} 
