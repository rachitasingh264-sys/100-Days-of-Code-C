#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    double radius;

    printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    if (radius < 0.0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }

    double area = PI * radius * radius;
    double circumference = 2.0 * PI * radius;

    printf("Area: %.4f\n", area);
    printf("Circumference: %.4f\n", circumference);

    return 0;
}




