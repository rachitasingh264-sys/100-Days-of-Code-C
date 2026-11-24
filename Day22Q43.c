#include <stdio.h>

int main() {
    int num, originalNum, remainder;
    long long sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Strong numbers are positive integers
    if (num <= 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }

    originalNum = num;

    // Extract each digit, compute its factorial, and add to sum
    while (num > 0) {
        remainder = num % 10;

        long long fact = 1;
        for (int i = 2; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
