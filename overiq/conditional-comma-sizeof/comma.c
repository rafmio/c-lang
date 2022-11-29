#include <stdio.h>

int main() {
	int a, b, c;
	int sum;

	sum = (a = 3, b = 4, c = 5, a + b + c);
	printf("sum: %d\n", sum);

	int x, y, z, summa;
	summa = (x = 30, y = 40, z = 50, x + y + z);
	printf("Summa = %d\n", summa);

	return 0;
}
