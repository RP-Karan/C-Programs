#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,I;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<r; i++)
    {
        for(j=0 ; j<c; j++)
        {
            if(i==j)
            {
                if(arr[i][j] != 1)
                {
                    I==0;
                    break;
                }
            }
            else
            {
                 if(arr[i][j] != 0)
                {
                    I= 0;
                    break;
                }
            }

        }
        if(I==0)
        break;
    }
     if(I)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;

}
