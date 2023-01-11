#include <stdio.h>

int main()
{
	int i = 12;
	int *ip = &i;
	double d = 2.31;
	double *dp = &d;

	printf("Values of variables: \n");
	printf("i  = %d\n", i);
	printf("ip = %p\n", ip);
	printf("d  = %.2f\n", d);
	printf("dp = %p\n", dp);

	printf("\n");

	printf("Addresses of variables: \n");
	printf("&i  = %p\n", &i);
	printf("&ip = %p\n", &ip);
	printf("&d  = %p\n", &d);
	printf("&dp = %p\n", &dp);

	printf("Dereferensing pointers: \n");
	printf("*ip = %d\n", *ip);
	printf("*dp = %.2f\n", *dp);

	printf("\n");

	printf("Sizes of variables: \n");
	printf("sizeof(i):  %d\n", sizeof(i));
	printf("sizeof(ip): %d\n", sizeof(ip));
	printf("sizeof(d):  %d\n", sizeof(d));
	printf("sizeof(dp): %d\n", sizeof(dp));

	return 0;
	
}
