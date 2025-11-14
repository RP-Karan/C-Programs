#include <stdio.h>

int main() {
    int arr[100], rotated[100];
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter K (number of positions to rotate): ");
    scanf("%d", &k);

    // In case K > n
    //k = k % n;

    // Right rotation using new index = (i + k) % n
    for (i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    printf("\n");
    return 0;
}

