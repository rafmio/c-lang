#include <stdio.h>

int main() {
	float f_val1 = 97.12;
	float f_val2;
	int i_val1;
	int i_val2;
	char ch_val1;
	char ch_cal2;

	i_val1 = f_val1;	// f_val1 == 97.12
	ch_val1 = i_val1;	// i_val1 == 97
	i_val2 = 12.45f;
	i_val2 = 'e';
	f_val2 = 12.34;

	printf("i_val = %d\n", i_val1);
	printf("ch_val1 = %c\n", ch_val1);
	printf("i_val2 = %d\n", i_val2);
	printf("f_val2 = %.2f\n", f_val2);

	return 0;
}
