#include <stdio.h>

int main() {
    int n;
    long long sum = 0;

    printf("Enter how many odd numbers to sum (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        sum += oddNumber;
    }

    printf("Sum of the first %d odd numbers = %lld\n", n, sum);

    return 0;
}
