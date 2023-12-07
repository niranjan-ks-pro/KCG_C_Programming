#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    // user enter a number
    scanf("%d", &num);
    // modulus operator returns the reminder (value after Division(/) of entered value and 2)
    if (num % 2 == 0)
    {
        printf("%d is even \n", num);
    }
    else
    {
        printf("%d is odd \n", num);
    }
    return 0;
}