#include <stdio.h>

int main() {
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", i);
	}

	for (i = 0; i <= 10; i = i + 2) {
		printf("%d ", i);	
	}
	printf("\n");
}
