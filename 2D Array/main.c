#include <stdio.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],d[10][10],i,j,m,n;
    printf("Enter the row : ");
    scanf("%d",&m);
    printf("Enter the column : ");
    scanf("%d",&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("Enter the value for a[%d][%d] : ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("Enter the value for b[%d][%d] : ",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("The addition of a and b is : ");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j] );

        }
        printf("\n");
    }
    printf("The multiplication of a and b is : ");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=a[i][j]*b[i][j];
            printf("\t%d",d[i][j] );

        }
        printf("\n");
    }
    return 0;
}
