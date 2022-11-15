#include <stdio.h>
#include <string.h>

int main() {
	char greetings[] = "Hello Mello!";
	printf("%s\n", greetings);

	for (int i = 0; i < strlen(greetings); i++) {
		printf("%c ", greetings[i]);	
	}

	printf("\n");
}
