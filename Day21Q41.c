#include <stdio.h>

int main() {
    int num, sign = 1;
    long long n, firstDigit, lastDigit, placeValue = 1, middlePart, swapped;

    printf("Enter an integer: ");
    scanf("%d", &num);

    n = num;

    // Preserve sign if the input is negative
    if (n < 0) {
        sign = -1;
        n = -n;
    }

    // Single-digit numbers remain unchanged when swapping first and last digit
    if (n < 10) {
        printf("After swapping first and last digit: %d\n", num);
        return 0;
    }

    // Find last digit and place value (10^(digits - 1))
    lastDigit = n % 10;
    firstDigit = n;

    while (firstDigit >= 10) {
        firstDigit /= 10;
        placeValue *= 10;
    }

    // Extract middle digits: remove first digit ((n % placeValue)) and last digit (/ 10)
    middlePart = (n % placeValue) / 10;

    // Rebuild number: lastDigit at front + middlePart + firstDigit at end
    swapped = (lastDigit * placeValue) + (middlePart * 10) + firstDigit;
    swapped *= sign;

    printf("After swapping first and last digit: %lld\n", swapped);

    return 0;
}
