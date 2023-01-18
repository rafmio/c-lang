#include <stdio.h>

int *abc();

int main()
{
	int *ptr;
	ptr = abc();
	return 0;
}

int *abc()
{
	int x = 100;
	int *p;
	p = &x;
	return p;
}
