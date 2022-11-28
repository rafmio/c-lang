#include <stdio.h>

int main() {
	float fp;
	printf("Enter a floating point number: ");
	scanf("%f", &fp);
	printf("You entered: %f\n", fp);

	int x, y;
	printf("Enter two numbers: ");
	scanf("%d%d", &x, &y);
	printf("Value of x = %d, y = %d\n", x, y);
	printf("\n");
	
	int a, b;
	printf("Enter two numbers again:");
	scanf("%d:%d", &a, &b);
	printf("Value of a = %d, value of b = %d\n", a, b);	


	return 0;
}
