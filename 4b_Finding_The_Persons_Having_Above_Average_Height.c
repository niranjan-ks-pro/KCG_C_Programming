#include <stdio.h>
int main()
{

    int n, i, j;
    int sum = 0;
    int arr[50];
    int avg, count = 0;

    printf("Enter the number of persons:");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf(" Enter the number of persons  height :", n);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / n;
    printf("\n  Average height is %d", avg);
    for (j = 0; j < n; j++)
    {
        if (arr[j] > avg)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\n Persons are below the average height");
    }
    else
    {
        printf(" \n persons are above the  average height is %d", count);
        return 0;
    }
}