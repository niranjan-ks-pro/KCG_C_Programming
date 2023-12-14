#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void reverse(char str[])
{
    int r = stlen(str) - 1, l = 0;

    while (l < r)
    {
        if (!alpha(str[l]))
            l++;

        else if (!alpha(str[r]))
        {
            r--;
        }
        else
        {
            char temp = str[l];
            str[l] = str[r];
            str[r] = temp;
            l + r;
            r--;
        }
    }
}
int main()
{
    char str[100];
    printf("input string");
    scanf("%s", str);
    reverse(str);
    printf(" out put string %s\n", str);

    return 0;
}