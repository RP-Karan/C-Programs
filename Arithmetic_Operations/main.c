#include <stdio.h>


int main()
{
    int a,b,c;
    printf("\n enter 2 nos :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\n Total : %d",c);
    c=a/b;
    printf("\n Div : %d",c);
    c=a-b;
    printf("\n Difference : %d",c);
    c=a*b;
    printf("\n Mul : %d",c);
    c=a%b;
    printf("\n Mod : %d",c);

    return 0;
}
