#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numeric values.\n");
        return 1;
    }

    if (a >= b && a >= c) {
        printf("%.2f is the largest number.\n", a);
    } else if (b >= a && b >= c) {
        printf("%.2f is the largest number.\n", b);
    } else {
        printf("%.2f is the largest number.\n", c);
    }

    return 0;
}
