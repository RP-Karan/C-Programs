#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count characters
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;   // increase the count for each character
    }

    // Print results
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] > 0) {      // if character not printed before
            printf("%c - %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0;        // so it won't print again
        }
    }

    return 0;
}
