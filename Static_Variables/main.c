#include <stdio.h>
#include <stdlib.h>


int increase(int a);
int main()
{
    increase(199);
    increase(1999);
    increase(19999);

    return 0;
}

int increase(int a)
{
    static int t=0;
    t += a;
    printf("\n total is %d",t);

}

----------x---------x----------x--------x--------


