#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d sorted elements:\n", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d sorted elements:\n", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;

    // Two-pointer merging
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements of a[]
    while (i < n1) {
        c[k++] = a[i++];
    }

    // Copy remaining elements of b[]
    while (j < n2) {
        c[k++] = b[j++];
    }

    // Print merged array
    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    printf("\n");
    return 0;
}
