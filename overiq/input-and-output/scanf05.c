#include <stdio.h>

int main() {
	int n;
	char ch;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Ener a character: ");
	scanf(" %c", &ch);

	printf("\n");

	printf("n = %d\n", n);
	printf("c = %c\n", ch);

	return 0;
}
