#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d are:\n", N);

    for (i = 2; i <= N; i++) {   // start from 2 (since 1 is not prime)
        isPrime = 1;             // assume number is prime

        for (j = 2; j <= i / 2; j++) {  // check divisibility
            if (i % j == 0) {
                isPrime = 0;     // not prime
                break;           // no need to check further
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
