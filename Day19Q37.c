#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Handle zero inputs (LCM is 0 if either number is 0)
    if (a == 0 || b == 0) {
        printf("LCM of %d and %d is 0.\n", a, b);
        return 0;
    }

    // Use long long for absolute copies to prevent overflow during multiplication
    long long x = (a < 0) ? -(long long)a : (long long)a;
    long long y = (b < 0) ? -(long long)b : (long long)b;

    long long tempX = x, tempY = y;
    while (tempY != 0) {
        long long temp = tempX % tempY;
        tempX = tempY;
        tempY = temp;
    }

    long long gcd = tempX;
    long long lcm = (x / gcd) * y;

    printf("LCM of %d and %d is %lld.\n", a, b, lcm);

    return 0;
}
