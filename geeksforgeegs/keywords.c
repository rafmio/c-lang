#include <limits.h>
#include <stdio.h>

int main() {
	printf("mininum int value = %d\n"
	       "maximum int value = %d\n"
	       "size of int in bytes = %zu\n"
	       "size of int in bits = %zu\n",
	       INT_MIN, INT_MAX, sizeof(int), sizeof(int) * CHAR_BIT);
}
