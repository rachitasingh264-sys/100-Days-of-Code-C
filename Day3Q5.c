#include <stdio.h>

int main(void) {
    double celsius;

    printf("Enter temperature in Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    if (celsius < -273.15) {
        printf("Warning: Temperature is below absolute zero (-273.15 C).\n");
    }

    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
