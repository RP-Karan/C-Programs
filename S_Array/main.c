#include <stdio.h>


int main()
{
    int i,a[100];
    for(i=0;i<5;i++)
    {
        printf("\n Enter the value :");
        scanf("%d",&a[i]);

    }
    for(i=0;i<5;i++)
    {

        printf("\n%d",a[i]);
    }

    return 0;
}
