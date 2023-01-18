#include <stdio.h>

int *ret_ptr(int *, int);

int main() 
{
	int i;
	int *ptr;
	int arr[] = {11, 22, 33, 44, 55};
	i = 4;

	printf("Address of arr = %u\n", arr);
	
	ptr = ret_ptr(arr, i);

	printf("After incrementing arr by 4: \n");
	
	printf("Value of ptr = %u\n", ptr);	
	printf("Value at %u is %d\n", ptr, *ptr);

	return 0;
}

int *ret_ptr(int *p, int n)
{
	p = p + n;
	return p;
}
