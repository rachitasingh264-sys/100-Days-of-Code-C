#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Perfect numbers are positive integers greater than 1
    if (num <= 1) {
        printf("%d is not a perfect number.\n", num);
        return 0;
    }

    // Sum all proper divisors up to num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
