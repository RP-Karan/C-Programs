#include <stdio.h>


int main()
{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf ("Enter 5 marks :");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    avg=total/5;
    printf("\nTotal:%d",total);
    printf("\nAverage of Total:%f",avg);
    if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
    {
        printf("\nResult:Pass");
        if(avg>=90&&avg<=100)
        {
            printf("\nGrade:A");

        }
        if(avg>=80&&avg<=89)
        {
            printf("\nGrade:B");

        }
        if(avg>=70&&avg<=79)
        {
            printf("\nGrade:C");

        }
        if(avg<70)
        {
            printf("\nGrade:D");

        }

    }
        else
    {
        printf("\nResult:Fail");
    }
    return 0;
}
