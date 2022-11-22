#include <stdio.h>
#include <string.h>

struct myStructure {
	int myNum;
	char myLetter;
	char myString[30];
};

int main() {
	struct myStructure s1;
	s1.myNum = 1000;
	s1.myLetter = 'F';
	strcpy(s1.myString, "Some text");

	printf("s1.myNum: %d\n", s1.myNum);
	printf("s1.myLetter: %c\n", s1.myLetter);
	printf("s1.myString: %s\n", s1.myString);

	return 0;
}
