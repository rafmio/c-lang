#include <stdio.h>

struct myStructure {
	int myNum;
	char myLetter;
	char myString[30];
};

int main() {
	struct myStructure s1 = {111, 'B', "Some text"};
	printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);

	return 0;
}

// We don't have to use the strcpy() function for string values with
// this technique
