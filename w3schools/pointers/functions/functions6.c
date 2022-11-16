#include <stdio.h>

int myFunction(int x, int y) {
	return x + y;
}

int main() {
	int result = myFunction(10, 20);
	printf("Result is = %d\n", result);
	return 0;
}
