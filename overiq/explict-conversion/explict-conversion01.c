#include <stdio.h>

int main() {
	int a = 25, b = 13;
	float result;

	result = a / b;

	printf("Without typecasting: 25 / 13 = %.2f\n", result);

	result = (float) a / b;

	printf("With typecasting: 25 / 13 = %.2f\n", result);
	
	result = (float) (a / b);

	printf("With typecasting entire expression: 25 / 13 = %.2f\n", result);

	return 0;
}


// https://overiq.com/c-programming-101/explicit-type-conversion-in-c/
