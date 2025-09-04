#include <stdio.h>


int main()
{
    int Choice,Quantity,total=0,c;
    RAJA:
    printf("\n\t\t----------Main Menu---------");
    printf("\n\t\t\t1.TEA    - 20RS");
    printf("\n\t\t\t2.COFFEE - 24RS");
    printf("\n\t\t\t3.VADAI  - 10RS");
    printf("\n\t\t\t4.bISCUIT- 15RS");
    printf("\n\t\t\t2.DRINKS - 30Rs");
    printf("\nEnter your choice:");
    scanf("\n%d",&Choice);
    switch(Choice)
    {
    case 1:
        printf("\nYou selected TEA");
        printf("\nEnter Quantity :");
        scanf("%d",&Quantity);
        total=total+(Quantity*20);
        break;
    case 2:
        printf("\nYou selected COFFEE");
        printf("\nEnter Quantity :");
        scanf("%d",&Quantity);
        total=total+(Quantity*24);
        break;
    case 3:
        printf("\nYou selected VADAI");
        printf("\nEnter Quantity :");
        scanf("%d",&Quantity);
        total=total+(Quantity*10);
        break;
    case 4:
        printf("\nYou selected BUSICUT");
        printf("\nEnter Quantity :");
        scanf("%d",&Quantity);
        total=total+(Quantity*15);
        break;
    case 5:
        printf("\nYou selected DRINKS");
        printf("\nEnter Quantity :");
        scanf("%d",&Quantity);
        total=total+(Quantity*30);
        break;
    default :
        printf("\n Invalied Item");
        break;
    }

    printf("\nIf you want to continue press 1:");
    scanf("%d",&c);
    if(c==1)
    {
        goto RAJA ;
    }
    else
    {
        printf("\n Total Amount : %d",total);
    }

    printf("\n----THANK YOU FOR COMING--------COME AGAIN-----");


    return 0;
}
