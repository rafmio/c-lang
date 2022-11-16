#include <stdio.h>

void myFunction(char name[]) {
	printf("Hello, %s\n", name);
}

int main() {
	myFunction("Jonny");
	myFunction("Taddy");
	myFunction("Anja");
	return 0;
}
