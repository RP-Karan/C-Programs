#include <stdio.h>


int main()
{
    int a=10;
    char b='*';
    long int c=123l;
    int d=013;
    int e=0x15;
    float f=123e-2f;
    printf("type 1 is \n %d \n %c \n %ld \n %d \n %d \n %f \n",a,b,c,d,e,f);
    printf("\n type 2 is \n %d \n %d \n %ld \n %d \n %d \n %0.1f \n",a,b,c,d,e,f);
    return 0;
}
