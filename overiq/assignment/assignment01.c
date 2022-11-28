#include <stdio.h>

int main() {
	int i = 10;
	char a = 'd';
	printf("ASCII value of %c is %d\n", a, a);

	a += 10;
	printf("ASCII value of %c is %d\n", a, a);

	a *= 5;
	printf("a = %d\n", a);

	a /= 4;
	printf("a = %d\n", a);

	a %= 2;
	printf("a = %d\n", a);

	a *= a + i;
	printf("a = %d\n", a);

	return 0;
}
