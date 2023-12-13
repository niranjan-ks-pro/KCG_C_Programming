
int main()
{
    int a[3][3], b[3][3], c[3][3], i, k, j;
    int arows, acolumns, brows, bcolumns;
    int sum = 0;

    printf("Enter the rows and columns of the matrix a:");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter the first matrix \n ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the rows and columns of the matrix b:");
    scanf("%d %d", &brows, &bcolumns);
    if (brows != acolumns)
    {
        printf("soerry! We cannot muliplies the matrices aand b:");
    }
    else
    {

        printf("Enter the second matrix \n ");
        for (i = 0; i < brows; i++)
        {
            for (j = 0; j < bcolumns; j++)

            {
                scanf("%d", &b[i][j]);
            }
        }
    }
    printf(" The First matrix\n ");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolumns; j++)

        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf(" The Second matrix \n ");
    for (i = 0; i < brows; i++)
    {
        for (j = 0; j < bcolumns; j++)

        {
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)
        {

            for (k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    printf("The multiplication of two matrix \n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolumns; j++)

        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}