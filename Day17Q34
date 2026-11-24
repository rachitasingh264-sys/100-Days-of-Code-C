#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisors up to i * i <= num
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
