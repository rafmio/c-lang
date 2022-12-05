#include <stdio.h>

int main() {
	int i = 1;

	do {
		if (i % 3 == 0) {
			printf("%d ", i);	
		}	
		i++;
	} while (i < 100);

	printf("\n");
	return 0;
}
