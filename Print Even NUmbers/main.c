#include <stdio.h>


int main()
{
    int N,i;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are:\n", N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;

}
