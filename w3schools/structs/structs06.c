// Copy structs
#include <stdio.h>

struct myStructure {
	int myNum;
	char myLet;
	char myStr[30];
};

int main() {
	struct myStructure s1 = {13, 'B', "Kissy-Missy"};
	struct myStructure s2;

	s2 = s1;
	printf("%d %c %s\n", s2.myNum, s2.myLet, s2.myStr);
}
