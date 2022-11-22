#include <stdio.h>

struct myStructure {
	int myNum;
	char myLetter;
};

int main() {
	struct myStructure s1, s2;
	s1.myNum = 150;
	s1.myLetter = 'Z';
	
	s2.myNum = 300;
	s2.myLetter = 'M';

	printf("s1 num: %d\n", s1.myNum);
	printf("s2 letter: %c\n", s1.myLetter);
	printf("s2 num: %d\n", s2.myNum);
	printf("s2 letter: %c\n", s2.myLetter);
}
