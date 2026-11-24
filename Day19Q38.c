#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Work with a positive copy so negative numbers also work cleanly
    int temp = (num < 0) ? -num : num;

    // Extract each digit from right to left and add to sum
    while (temp > 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
