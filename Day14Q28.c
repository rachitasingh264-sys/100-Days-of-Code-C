#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;
    int hasEven = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (!hasEven) {
        printf("There are no even numbers between 1 and %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }

    return 0;
}
