#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 != 0)
        // if i % 5 is not equal to zero then print i
        {
            printf("%d", i);
        }
    }

    return 0;
}