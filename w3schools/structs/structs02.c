#include <stdio.h>

struct myStructure {
	int myNum;
	char myLetter;
};

int main() {
	struct myStructure s1;
	s1.myNum = 140;
	s1.myLetter = 'B';
	printf("My number: %d\n", s1.myNum);
	printf("My letter: %c\n", s1.myLetter);
	return 0;
}
