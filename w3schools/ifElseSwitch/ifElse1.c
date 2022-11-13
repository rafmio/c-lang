#include <stdio.h>

int main() {
	if (20 > 18) {
      		printf("20 is greater than 18\n");	
	} 

	int x = 20;
	int y = 18;
	if (x > y) {
      		printf("x is greater than y\n"); 
	}
	int time = 20;
	if (time < 18) {
		printf("Good day\n");
	} else {
      		printf("Good evening\n"); 
	}

	int myNum = 10;
	if (myNum > 0) 
		printf("The value is a positive number\n");
	else if (myNum < 0)
		printf("The value is a negative number\n");
	else
		printf("The value is 0\n");	
}
