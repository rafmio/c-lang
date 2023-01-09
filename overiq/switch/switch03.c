#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	char op;

	printf("Enter first number: ");
	scanf("%d", &a);

	printf("Enter second number: ");
	scanf("%d", &b);

	printf("Enter operation: ");
	scanf(" %c", &op);

	switch(op)
	{
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a * b);
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, a / b);
			break;
		default:
			printf("Invalid Operation\n");	
	}
	return 0;
}
