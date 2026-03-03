#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[20];
    int i,j,temp;

    printf("Enter a string :");
    fgets(c,sizeof(c),stdin);
    c[strcspn(c,"\n")]="\0";

    j=strlen(c)-1;
    i=0;

    while(i<j)
    {
    temp=c[i];
    c[i]=c[j];
    c[j]=temp;
    i++;
    j--;
    }
    printf("Reversed String is : %s",c);
    return 0;
}
