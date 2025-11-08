#include <stdio.h>


int main()
{
    int KM,M,CM,Ft,In;
    printf("\n Enter the Kilometer :");
    scanf("%d",&KM);
    M=KM*1000;
    CM=M*100;
    Ft=CM/2.56;
    In=Ft/12;
    printf("\n meter value is %d \n",M);
    printf(" cendi meter value is %d \n",CM);
    printf(" Feet value is %d \n",Ft);
    printf(" Inch value is %d ",In);
    return 0;
}
