#include <stdio.h>

int main() {
	int x = 12, y = 1;
	printf("Initial value of x = %d\n", x);
	printf("Initial value of y = %d\n", y);

	y = ++x;
	printf("After incrementing by 1: \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("\n");

	y = --x;
	
	printf("After decrementing by 1: \n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}
