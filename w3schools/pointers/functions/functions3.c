#include <stdio.h>

void myFunction(char name[], int age) {
	printf("Hello, %s. You are %d years old\n", name, age);
}

int main() {
	myFunction("Fred", 52);
	myFunction("Mike", 64);
	myFunction("Jessie", 28);
	return 0;
}
