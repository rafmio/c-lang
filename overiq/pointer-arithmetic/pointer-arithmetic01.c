#include <stdio.h>

int main() 
{
	int i = 12, *ip = &i;
	double d = 2.3, *dp = &d;
	char ch = 'a', *cp = &ch;

	printf("ip = %u\n", ip);
	printf("dp = %u\n", dp);
	printf("ch = %u\n", cp);

	printf("\n");

	printf("ip + 1 = %u\n", ip + 1);
	printf("dp + 1 = %u\n", dp + 1);
	printf("ch + 1 = %u\n", cp + 1);

	printf("\n");

	printf("ip + 2 = %u\n", ip + 2);
	printf("dp + 2 = %u\n", dp + 2);
	printf("ch + 2 = %u\n", cp + 2);

	return 0;
}
