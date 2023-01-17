#include <stdio.h>

int main() 
{
	int i1 = 12, *ip1 = &i1;
	int i2 = 12, *ip2 = &i2;

	printf("ip1 = %u\n", ip1);
	printf("ip2 = %u\n", ip2);
	printf("\n");
	printf("ip2 - ip1 = %d\n", ip2 - ip1);
	printf("ip1 - ip2 = %d\n", ip1 - ip2);
	return 0;
}
