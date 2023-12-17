#include <stdio.h>
#include <stdio.h>

int main()
{

    int a;
    int *ptr;
    printf("Pointer example program:Print Pointer Adress\n");

    a = 10;
    ptr = &a;
    printf("[a]:Value of A =%d", a);
    printf("\n[*ptr]:Value of A =%d", *ptr);
    printf("\n[&a]:Value of A =%p", &a);
    printf("\n[ptr]:Value of A =%p", ptr);
    printf("\n[&ptr]:Value of ptr =%p", &ptr);
    printf("\n[ptr]:Value of ptr =%p", ptr);

    return 0;
}