#include <stdio.h>

int main() {
	int n, num, sum = 0, remainder;

	printf("Enter a number: ");
	scanf("%d", &n);

	num = n;

	while (n > 0) {
		remainder = n % 10;
		sum += remainder;
		n /= 10;	
	}
	printf("Sum of digits of %d is %d\n", num, sum);

	return 0;
}

