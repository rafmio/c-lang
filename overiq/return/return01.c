#include <stdio.h>

void eligible_or_not(int x);

int main() 
{
	int n;
	printf("Enter age: ");
	scanf("%d", &n);
	eligible_or_not(n);

	return 0;
}

void eligible_or_not(int age)
{
	if (age >= 18)
	{
		printf("You are eligible to vote\n");
		return;	
	}
	else if (age == 17)
	{
		printf("Try next year\n");
		return;	
	}
	else
	{
		printf("You are not yet ready\n");
		return;	
	}
}
