#include <stdio.h>


int main()
{
    int BS,DS,HRC,GS;
    printf("\n Enter basic salary :");
    scanf("%d",&BS);
    DS=BS*0.4;
    HRC=BS*0.2;
    GS=BS+DS+HRC;
    printf("\n DS is %d ",DS);
    printf("\n HRC is %d ",HRC);
    printf("\n GS is %d ",GS);
    return 0;
}
