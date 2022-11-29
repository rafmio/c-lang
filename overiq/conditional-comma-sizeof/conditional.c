#include <stdio.h>

int main() {
	int a = 5, b = 3;
	a > b ? printf("%d\n", a) : printf("%d\n", b);

	int x, y, max;

	printf("Enter x and y: ");
	scanf("%d%d", &x, &y);

	max = x > y ? x : y;

	printf("Largest of the two numbers = %d\n", max);

	return 0;
}
