#include <stdio.h>

int main() {
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("%d is even\n", n);	
	} else {
		printf("%d is odd\n", n);	
	}

	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		printf("%d is greater than %d\n", a, b);	
	} else {
		printf("%d is greater than %d\n", b, a);	
	}

	return 0;
}
