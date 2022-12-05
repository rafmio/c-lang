#include <stdio.h>

int main() {
	int row = 0, col = 0;

	for(row = 0; row < 10; row++) {
		for(col = 0; col < row; col++) {
			printf(" * ");	
		}	
		printf("\n");
	}

	return 0;
}
