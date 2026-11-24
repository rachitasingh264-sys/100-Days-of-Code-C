#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}; // Frequency array for digits 0 through 9

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers by working with the positive magnitude
    if (num < 0) {
        num = -num;
    }

    // Special case: if the number is 0, digit '0' occurs once
    if (num == 0) {
        freq[0] = 1;
    } else {
        while (num > 0) {
            int digit = (int)(num % 10); // Extract last digit
            freq[digit]++;               // Increment its count
            num /= 10;                   // Remove last digit
        }
    }

    // Find the digit (0-9) with the highest frequency
    int maxDigit = 0;
    for (int d = 1; d < 10; d++) {
        if (freq[d] > freq[maxDigit]) {
            maxDigit = d;
        }
    }

    printf("Most frequent digit = %d (occurs %d time%s)\n",
           maxDigit, freq[maxDigit], freq[maxDigit] == 1 ? "" : "s");

    return 0;
}
