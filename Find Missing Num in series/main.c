#include <stdio.h>

int main() {
    int n, i, num;
    int sum = 0, total;
    int x1 = 0, x2 = 0;

    printf("Enter N (the largest number): ");
    scanf("%d", &n);

    printf("Enter %d numbers (1 to N with one missing):\n", n - 1);

    // Take user input
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &num);
        sum += num;      // For sum method
        x2 ^= num;       // For XOR method
    }

    // --- SUM Formula Method ---
    total = n * (n + 1) / 2;
    int missing_sum = total - sum;

    // --- XOR Method ---
    for (i = 1; i <= n; i++) {
        x1 ^= i;
    }
    int missing_xor = x1 ^ x2;

    // --- Display results ---
    printf("\nUsing SUM Formula  : Missing number = %d", missing_sum);
    printf("\nUsing XOR Method   : Missing number = %d\n", missing_xor);

    return 0;
}
