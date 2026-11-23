#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter the three side lengths of the triangle: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numeric values.\n");
        return 1;
    }

    if (a <= 0.0 || b <= 0.0 || c <= 0.0) {
        printf("Side lengths must be positive numbers.\n");
        return 1;
    }

    /* Triangle inequality theorem: sum of any two sides must be greater than the third */
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("The given side lengths do not form a valid triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("The triangle is Equilateral (all three sides are equal).\n");
    } else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles (two sides are equal).\n");
    } else {
        printf("The triangle is Scalene (all three sides are different).\n");
    }

    return 0;
}
