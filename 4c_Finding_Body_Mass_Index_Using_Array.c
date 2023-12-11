#include <stdio.h>
#include <conio.h>

void main()
{
    int i, j, n;
    float massheight[n][2];
    float bmi[n];

    printf("Enter the number of persons:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            switch (j)
            {
            case 0:
                printf(" \n Pleas enter  %d person weaight in kg ", i + 1);
                scanf("%f", &massheight[i][0]);

                break;
            case 1:
                printf(" \n Pleas enter  %d person height in meter ", i + 1);
                scanf("%f", &massheight[i][1]);
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        bmi[i] = massheight[i][0] / pow(massheight[i][1], 2.0);
        printf("\n Persons %d Bmi is %f", i + 1, bmi[i]);
    }
}
