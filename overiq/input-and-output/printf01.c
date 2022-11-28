#include <stdio.h>

int main() {
	printf("Control string with no conversion specification");
	printf("\n");

	int ival = 100;
	printf("%d\n", ival);

	int sal = 200000;
	printf("Basic salary: %d\n", sal);
	
	float fival = 3.14551;
	printf("float: %f\n", fival);

	char cval = 'z';
	printf("char: %c\n", cval);

	char str[] = "Testing prinf()";
	printf("%s\n", str);

	int salary = 20000;
	int expenses = 12000;
	int saving = 7000;
	printf("Salary: %d, Expenses: %d, Saving: %d\n", salary, expenses, saving);

	printf("Octal equivalent of %d = %o\n", ival, ival);
	printf("Hexadecimal equivalent of %d = %x\n", ival, ival);

	return 0;
}
