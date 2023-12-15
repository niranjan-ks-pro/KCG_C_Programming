#include <stdio.h>

void sort(int *, int);
void main()
{
    int a[20], n, i;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    printf("\n Sorted Ordern\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);

    getch();
}

void sort(int *x, int n)
{
    int t, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(x + j) > *(x + (j + 1)))
            {
                t = *(x + j);
                *(x + j) = *(x + (j + 1));
                *(x + (j + 1)) = t;
            }
        }
    }
}