// Program to find the square root of a number
#include<stdio.h>
#include<math.h>

int main()
{
    float a;

    printf("Enter number: ");
    scanf("%f", &a);

    printf("Square root of %.2f is %.2f", a, sqrt(a));

    // signal to operating system program ran fine
    return 0;
}
