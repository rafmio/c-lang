#include <stdio.h>

int main() {
	printf("Sizes of types: \n");
	printf("\tshort = %lu\n", 	 sizeof(short));
	printf("\tint = %lu\n",   	 sizeof(int));
	printf("\tunsigned int = %lu\n", sizeof(unsigned int));
	printf("\tchar = %lu\n", 	 sizeof(char));
	printf("\tfloat = %lu\n", 	 sizeof(float));
	printf("\tdouble = %lu\n", 	 sizeof(double));
	printf("\tlong double = %lu\n",  sizeof(long double));

	return 0;
}
