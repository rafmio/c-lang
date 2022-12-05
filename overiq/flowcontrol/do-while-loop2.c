/*
 * Program to calculate the Simple interest
 * SI = (Principal * Rate * Time) / 100
 */

#include <stdio.h>

int main() {
	float p, r, t;
	char ch;

	do {
		printf("Enter principal: ");
		scanf("%f", &p);

		printf("Enter rate: ");
		scanf("%f", &r);

		printf("Enter t: ");
		scanf("%f", &t);

		printf("SI = %.2f\n", (p * r * t) / 100);	

		printf("\nCalculate SI one more time? y/n \n");
		scanf("%c", &ch);
	} while (ch == 'y');

	return 0;
}
