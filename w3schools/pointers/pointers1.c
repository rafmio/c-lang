#include <stdio.h>

int main() {
	int myAge = 39;
	printf("%d\n", myAge);
	printf("%p\n", &myAge);

	int* ptr = &myAge;
	printf("ptr: %p\n", ptr);
	printf("*ptr: %d\n", *ptr);
}
