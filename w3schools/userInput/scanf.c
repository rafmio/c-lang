#include <stdio.h>

int main() {
	int myNum;
	printf("Type a number: ");
	scanf("%d", &myNum);
	printf("You entered number: %d\n", myNum);

	char firstName[30];
	printf("Enter your first name: ");
	scanf("%s", &firstName);
	printf("Hello, %s, how are you?\n", firstName);
}
