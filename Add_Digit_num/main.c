#include <stdio.h>

int main()
{
    int a, b, c, d,p,q,r,Total=0, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &a);
    printf("Enter a 2-digit number: ");
    scanf("%d", &p);

    // Extract the digits
    b = a % 10; // Last digit
    sum += b;

    c = (a / 10) % 10; // Middle digit
    sum += c;

    d = (a / 100) % 10; // First digit
    sum += d;

    q=p%10;
    Total+=q;
    r=(p/10)%10;
    Total+=r;

    printf("Total sum of digits is %d\n", sum);
    printf("Total sum of digits is %d\n", Total);

    return 0;
}
