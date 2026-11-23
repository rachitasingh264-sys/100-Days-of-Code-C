#include <stdio.h>

int main(void) {
    long long n;

    printf("Enter a positive integer n: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Please enter a positive natural number (greater than 0).\n");
        return 1;
    }

    long long sum = n * (n + 1) / 2;

    printf("Sum of the first %lld natural numbers is: %lld\n", n, sum);

    return 0;
}
