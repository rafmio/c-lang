#include <stdio.h>

int main() {
	int a, b, c, larger;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c) {
			larger = a;	
		} else {
			larger = c;	
		}	
	} else {
		if (b > c) {
			larger = b;	
		} else {
			larger = c;	
		}	
	}

	printf("Largest number is %d\n", larger);

	return 0;
}
