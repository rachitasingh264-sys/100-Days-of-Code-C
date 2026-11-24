#include <stdio.h>

int main() {
    int num, originalNum, temp, remainder, digits = 0;
    long long sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }

    originalNum = num;
    temp = num;

    // Count the total number of digits
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
    }

    // Calculate the sum of each digit raised to 'digits' power
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;

        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
