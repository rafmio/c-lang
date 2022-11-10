#include <stdio.h>

int Sub(int num1, int num2);

int num1;

int Sub(int num1, int num2) {
	return (num1 - num2);
}

int main() {
	printf("%d\n", Sub(10, 5));
	return 0; 
}
