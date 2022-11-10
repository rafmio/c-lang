#include <stdio.h>

int x = 0;
int f() {
	return x;
}

int g() {
	int x = 1;
	return f();
}

int main() {
	printf("%d\n", g());
	printf("\n");
	getchar();
}
