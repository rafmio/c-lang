#include <stdio.h>

int myFunc(int, int);

int main() {
	int result = myFunc(200, 300);
	printf("Result is = %d\n", result);
	return 0;
}

int myFunc(int x, int y) {
	return x + y;
}
