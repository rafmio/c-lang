#include <stdio.h>

#define SIZE 5

int main() 
{
	int *p;
	int (*parr)[SIZE];
	int my_arr[SIZE];

	p = my_arr;
	parr = my_arr;

	printf("p    = %u\n", p);
	printf("parr = %u\n", parr);

	p++;
	parr++;

	printf("\nAfter incrementing:\n");
	printf(" p    = %u\n",  p);
	printf(" parr = %u\n",  parr);
	printf("*parr = %u\n", *parr);

	return 0;
} 
