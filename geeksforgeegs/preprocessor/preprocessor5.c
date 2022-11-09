#include <stdio.h>
#define merge(a, b) a##b
#define xandy(x, y) x##y
int main() {
	printf("%d\n", merge(12, 34));
	printf("%d\n", xandy(10, 1000));
        return 0;	
}
