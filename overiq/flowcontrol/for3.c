#include <stdio.h>

int main() {
	int i, sum = 0;

	for (i = 1; ; i++) {
		if(i > 100) {
			break;	
		}	
		sum += i;
	}
	printf("Sum = %d\n", sum);

	return 0;
}
