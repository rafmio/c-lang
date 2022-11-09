#include <stdio.h>
#define LIMIT 100
int main() {
	printf("%d\n", LIMIT);

#undef LIMIT
	int LIMIT = 1001;
	printf("%d\n", LIMIT);
	return 0;
}
