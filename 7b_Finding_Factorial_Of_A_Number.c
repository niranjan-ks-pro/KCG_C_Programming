#include <stdio.h>

long factorial(int n)
{
    if (n == 0)

        return 1;

    else
    {
        return (n * (factorial(n - 1)));
    }
}

void main()
{
    int Number;
    long fact;
    printf("Enter a number to find factorial:");
    scanf("%d", &Number);
    fact = factorial(Number);
    printf("The factorial of %d is %d\n", Number, fact);
    return 0;
}