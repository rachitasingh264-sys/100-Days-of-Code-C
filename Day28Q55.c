#include <stdio.h>

int main() {
    int n;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("There are no prime numbers up to %d.\n", n);
        return 0;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1; // Assume num is prime until a factor is found

        // Only check divisors up to sqrt(num), written as d * d <= num
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) {
                isPrime = 0; // Found a divisor, so num is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
