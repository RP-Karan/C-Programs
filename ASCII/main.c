#include <stdio.h>


int main()
{
    int i;
    char a='a';
    for(i=0;i<=255;i++)
    {
        printf("\n%d = %c",i,i);
    }
    printf("\n a=%c",a-32);
    return 0;
}
