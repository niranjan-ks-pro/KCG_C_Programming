#include <stdio.h>
#include <conio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter the first matrix \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            scanf("%d", &b[i][j]);
        }
    }

    printf(" The First matrix\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf(" The Second matrix \n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Thesum of the matrix \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)

        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
