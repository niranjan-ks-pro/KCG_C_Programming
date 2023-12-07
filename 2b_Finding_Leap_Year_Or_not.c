#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year :");
    // user enter a year
    scanf("%d", &year);
    // The modulus operator checking the vale true or fals.
    if (year % 400 == 0)
    {
        printf(" %d is leap year.", year);
    }
    else
    {
        printf("%d is not a leap year.", year);
    }
    return 0;
}