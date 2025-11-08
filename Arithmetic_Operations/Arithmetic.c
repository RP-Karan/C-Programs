#include <stdio.h>


int main()
{
    int a,b,c,i;
    int age;
    printf("\n\n Enter your age :");
    scanf("%d",&age);
    if(age>=18){
    printf("\n enter a no :");
    scanf("%d",&a);
    printf("\n enter a no :");
    scanf("%d",&b);
    printf("\n\n Enter your choice :");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
    c=a+b;
    printf("\n Total : %d",c);
    break;
    case 2:
    c=a-b;
    printf("\n Div : %d",c);
    break;

    case 3:
    c=a/b;
    printf("\n Difference : %d",c);
    break;
    case 4:
    c=a*b;
    printf("\n Mul : %d",c);
    break;
    case 5:
    c=a%b;
    printf("\n Mod : %d",c);
    break;
    }
    }
    else{
        printf("You are not eligible");
    }

    return 0;
}
