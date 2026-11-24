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

    // For term i (1-based): numerator = 2*i - 1, denominator = 2*i (for i >= 2)
    // Term 1 is 1 (i.e., 1/1), then 3/4, 5/6, 7/8, ...
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            double numerator = 2.0 * i - 1.0;
            double denominator = 2.0 * i;
            sum += numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.6lf\n", n, sum);

    return 0;
}
