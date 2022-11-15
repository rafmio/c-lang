#include <stdio.h>

int main() {
	int myArr[] = {25, 50, 75, 100};
	for (int i = 0; i < 4; i++) {
		printf("myArr[%d] = %d\n", i, myArr[i]);	
	}

	myArr[0] = 300;
	for (int i = 0; i < 4; i++) {
		printf("myArr[%d] = %d\n", i, myArr[i]);	
	}

	int myNumbers[4];
	myNumbers[0] = 100;
	myNumbers[1] = 200;
	myNumbers[2] = 400;
	myNumbers[3] = 1000;

	printf("\n");

	for (int i = 0; i < 4; i++) {
		printf("myNumbers[%d] = %d\n", i, myNumbers[i]);
	}
}
