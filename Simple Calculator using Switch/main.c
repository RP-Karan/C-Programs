#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Space before %c to ignore newline character
    printf("Enter second number: ");
    scanf("%d", &b);

    // Perform operation based on operator using switch
    switch(op) {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %d / %d = %d\n", a, b, a / b);
            else
                printf("Error: Division by zero is not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
