// Modify struct's values
#include <stdio.h>
#include <string.h>

struct myStruct {
	int myNum;
	char myLet;
	char myStr[30];
};

int main() {
	struct myStruct s1 = {155, 'B', "Huggy-Waggy"};
	printf("s1.myNum: %d\n", s1.myNum);
	printf("s1.myLet: %c\n", s1.myLet);
	printf("s1.myStr: %s\n", s1.myStr);

	s1.myNum = 30;
	s1.myLet = 'Z';
	strcpy(s1.myStr, "Tosi-Bosi");

	printf("s1.myNum: %d\n", s1.myNum);
	printf("s1.myLet: %c\n", s1.myLet);
	printf("s1.myStr: %s\n", s1.myStr);

	struct myStruct s2;
	s2 = s1;
	s2.myNum = 99;
	s2.myLet = 'N';
	strcpy(s2.myStr, "Chiky-Picky");

	printf("s2.myNum: %d\n", s2.myNum);
	printf("s2.myLet: %c\n", s2.myLet);
	printf("s2.myStr: %s\n", s2.myStr);

	return 0;	
}
