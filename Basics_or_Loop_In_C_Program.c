#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for (i = 2; i <= 100; i = i + 2)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}

