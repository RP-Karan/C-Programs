#include <stdio.h>


int main()
{
    int a,b,c,largest;
    printf("Enter 3 values :");
    scanf("%d%d%d",&a,&b,&c);
    largest=(a>b&&a>c)?a:(b>c&&b>a)?b:c;
    printf("Largest number is %d",largest);

    return 0;
}
