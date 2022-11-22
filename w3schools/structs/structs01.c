#include <stdio.h>

struct myStructure {
	int myNum;
	char myLetter;
};

int main() {
	struct myStructure s1;
	s1.myNum = 100;
	s1.myLetter = 'A';

	printf("s1.myNym: %d\n", s1.myNum);
	printf("s1.myLetter: %c\n", s1.myLetter);
}
