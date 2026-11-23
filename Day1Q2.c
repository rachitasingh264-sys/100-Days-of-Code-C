#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("\n--- Results ---\n");
    printf("Sum: %.2lf\n", sum);
    printf("Difference: %.2lf\n", difference);
    printf("Product: %.2lf\n", product);

    if (num2 != 0.0) {
        quotient = num1 / num2;
        printf("Quotient: %.2lf\n", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}
