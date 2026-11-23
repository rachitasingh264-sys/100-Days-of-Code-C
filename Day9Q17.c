#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;

    printf("Enter coefficients a, b, and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input. Please enter three numeric values.\n");
        return 1;
    }

    if (a == 0.0) {
        printf("Coefficient 'a' cannot be zero for a quadratic equation.\n");
        return 1;
    }

    double discriminant = (b * b) - (4.0 * a * c);

    if (discriminant > 0.0) {
        double sqrt_d = sqrt(discriminant);
        double root1 = (-b + sqrt_d) / (2.0 * a);
        double root2 = (-b - sqrt_d) / (2.0 * a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.4f\n", root1);
        printf("Root 2 = %.4f\n", root2);
    } else if (discriminant == 0.0) {
        double root = -b / (2.0 * a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.4f\n", root);
    } else {
        double real_part = -b / (2.0 * a);
        double imag_part = sqrt(-discriminant) / (2.0 * a);
        printf("Roots are complex and distinct.\n");
        printf("Root 1 = %.4f + %.4fi\n", real_part, imag_part);
        printf("Root 2 = %.4f - %.4fi\n", real_part, imag_part);
    }

    return 0;
}
