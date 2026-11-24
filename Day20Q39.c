#include <stdio.h>

int main() {
    int num, remainder, hasOdd = 0;
    long long product = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Work with a positive copy so negative inputs behave consistently
    int temp = (num < 0) ? -num : num;

    // Extract digits from right to left and multiply odd ones
    while (temp > 0) {
        remainder = temp % 10;

        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }

        temp /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits of %d = %lld\n", num, product);
    } else {
        printf("No odd digits found in %d (Product = 0).\n", num);
    }

    return 0;
}
