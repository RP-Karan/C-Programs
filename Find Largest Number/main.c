#include <stdio.h>

int main() {
    int a, b, c,A,B,C,largest_if, largest_ternary;

    // Input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // --- Using if statements ---
    if (a >= b && a >= c) {
        largest_if = a;
    } else if (b >= a && b >= c) {
        largest_if = b;
    } else {
        largest_if = c;
    }

    printf("Enter three numbers: ");
    scanf("%d %d %d", &A, &B, &C);


    // --- Using conditional (ternary) operator ---
    largest_ternary = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);

    // Output both results
    printf("Using if:        Largest number is %d\n", largest_if);
    printf("Using ternary:   Largest number is %d\n", largest_ternary);

    return 0;
}
