#include <stdio.h>
#define INCREMENT(x) ++x

int main() {
	char* ptr = "GeeksQuiz";
	int x = 10;
	printf("%s ", INCREMENT(ptr));
	printf("%d\n", INCREMENT(x));
	return 0;
}
