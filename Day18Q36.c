#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Work with non-negative values so GCD is always positive or well-defined
    int x = (a < 0) ? -a : a;
    int y = (b < 0) ? -b : b;

    // Handle edge cases involving zero
    if (x == 0 && y == 0) {
        printf("HCF (GCD) of 0 and 0 is undefined.\n");
        return 0;
    }

    // Euclidean algorithm: gcd(x, y) = gcd(y, x % y)
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("HCF (GCD) of %d and %d is %d.\n", a, b, x);

    return 0;
}
