#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        ;
    {
        sum = (n * n) * ((n + 1) * (n + 1)) / 4;
    }
    printf("The sum of the cubes is %d", sum);

    return 0;
}