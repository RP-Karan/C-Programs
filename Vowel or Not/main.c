#include <stdio.h>

int main()
{
    char L;
    printf("\n Enter the letter: ");
    scanf("%c",&L);
    switch(L)
    {
        case 'a' :
            printf("\n %c is a vowel",L);
            break;
        case 'e' :
            printf("\n %c is a vowel",L);
            break;
        case 'i' :
            printf("\n %c is a vowel",L);
            break;
        case 'o' :
            printf("\n %c is a vowel",L);
            break;
        case 'u' :
            printf("\n %c is a vowel",L);
            break;
        default :
            printf("\n %c is not a Vowel",L);
            break;

    }
    return 0;
}
