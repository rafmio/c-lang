#include <stdio.h>

void func_1();
int a, b = 10;

int main()
{
	func_1();
	func_1();
	func_1();

	return 0;
}

void func_1()
{
	int a = 1;
	static int b = 100;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	a++;
	b++;
}
