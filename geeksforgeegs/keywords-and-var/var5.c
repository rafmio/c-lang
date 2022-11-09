#include <stdio.h>

extern int x = 0;
int z = 10;
typedef long long int LL;

void calSquare(int arg) {
	printf("The square of %d is %d\n", arg, arg * arg);
}

int main() {
	const int a = 32;
	char b = 'G';
	extern int z;
	LL c = 1000000;
	printf("Hello World!\n");
	printf("const var: %d\n", a);
	printf("char var: %c\n", b);
	printf("long long int: %lld\n", c);
	printf("x and z: %d, %d\n", x, z);
	x = 2;
	z = 5;
	printf("x and z after changing: %d, %d\n", x, z);

	while (x > 0) {
      		static int y = 5;
	        y++;
		printf("The value of y is %d\n", y);
		x--;	
	}

	calSquare(5);
	printf("Bye!\n");

	return 0; 	
}
