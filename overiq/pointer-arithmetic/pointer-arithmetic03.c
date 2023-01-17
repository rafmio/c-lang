#include <stdio.h>

int main() 
{
	int i = 10;
	int *ip = &i;
	int **iip = &ip;

	printf("    i = %d\n",   i);
	printf("   &i = %u\n",  &i);
	printf("   ip = %d\n",   ip);
	printf("  &ip = %u\n",  &ip);
	printf("  iip = %d\n",  iip);
	printf(" *iip = %d\n", *iip);
	printf("**iip = %d\n", **iip);

	return 0;
}
