#include <stdio.h>

int myFunction(int x) {
	return 5 + x;
}

int sum(int x, int y) {
	return x + y;
}

int main() {
	printf("Result is: %d\n", myFunction(30));
	
	printf("Result of sum is: %d\n", sum(30, 120));

	int result = myFunction(10) + sum(100, 200);
	printf("Result of calling func: %d\n", result);

	return 0;
}
