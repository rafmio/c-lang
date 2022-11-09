#include <stdio.h>
#define MULTIPLY(a, b) a * b

int main() {
	printf("%d\n", MULTIPLY(2 + 3, 3 + 5));
	return 0;
}

// The macro is expanded as 2 + 3 * 3 + 5, not as 5 * 8
