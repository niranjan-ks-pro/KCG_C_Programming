#include <stdio.h>

int main()
{

    int a, b, temp;

    printf("\nEnter the value for a:");
    scanf("%d", &a);

    printf("\nEnter the value for b:");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    printf("\nThe valuye for a after swappng:%d", a);
    printf("\nThe valuye for b after swappng:%d", b);
    return 0;
}