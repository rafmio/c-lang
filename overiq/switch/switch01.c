#include <stdio.h>

int main() 
{
	int i, sum;
	printf("Enter a number: ");
	scanf("%d", &i);

	switch(i)
	{
		case 1:
		printf("Number is one\n");
		case 2:
		printf("Number is two\n");
		case 3:
		printf("Number is three\n");
		case 4:
		printf("Number is four\n");
		default:
		printf("Something else\n");
	}
	return 0;
}
