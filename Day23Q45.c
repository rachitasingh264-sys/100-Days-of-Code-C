#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    // For term i (1-based): numerator = 2*i, denominator = 4*i - 1
    // Terms: 2/3, 4/7, 6/11, 8/15, ...
    for (int i = 1; i <= n; i++) {
        double numerator = 2.0 * i;
        double denominator = 4.0 * i - 1.0;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.6lf\n", n, sum);

    return 0;
}
