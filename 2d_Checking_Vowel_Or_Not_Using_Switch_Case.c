#include <stdio.h>

int main()
{
    char cha;
    printf("Enter a character:");
    // char Receiving character from the user
    scanf("%c", &cha);
    // The control of the program jumps to sitch case
    switch (cha)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf(" Vowel");

        break;

    default:
        printf("Consonants");

        return 0;
    }
}