#include <stdlib.h>
#include <stdio.h>
int check(int);
int main(void)
{
    int *a, i, j, n;
    printf("Array size : ");
    scanf("%d", &n);
    a = malloc(sizeof(int) * n);
    printf("Enter array elements : ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Array elements : ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (check(a[j]) > check(a[j + 1]))
                a[j] = a[j] + a[j + 1] - (a[j + 1] = a[j]);
    printf("The elements after sorting with its weight is : \n");
    for (i = 0; i < n; i++)
        printf("< %d , %d >\n", a[i], check(a[i]));
    free(a);
    return 0;
}

int check(int n)
{
    int sum, weight = 0, i;
    for (sum = 0, i = 1; i < n; i += 2)
    {
        sum = sum + i;
        if (sum == n)
            weight += 5;
    }
    if (n % 4 == 0 && n % 6 == 0)
        weight += 4;
    if (n % 2 == 0)
        weight += 3;
    return weight;
}