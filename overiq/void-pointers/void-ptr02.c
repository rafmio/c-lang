#include <stdio.h>

int main() {
	int one_d[5] = {12, 19, 25, 34, 46};
	int i;

	void *vp = one_d;

	for(i = 0; i < 5; i++) {
		printf("one_d[%d] = %d\n", i, *( (int *) vp + i));	
	}

	return 0;
}
