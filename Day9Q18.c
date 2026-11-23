#include <stdio.h>

int main(void) {
    double percentage;

    printf("Enter percentage (0-100): ");
    if (scanf("%lf", &percentage) != 1) {
        printf("Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    if (percentage < 0.0 || percentage > 100.0) {
        printf("Invalid percentage. Please enter a value between 0 and 100.\n");
        return 1;
    }

    if (percentage >= 90.0) {
        printf("Percentage: %.2f%% -> Grade A\n", percentage);
    } else if (percentage >= 80.0) {
        printf("Percentage: %.2f%% -> Grade B\n", percentage);
    } else if (percentage >= 70.0) {
        printf("Percentage: %.2f%% -> Grade C\n", percentage);
    } else if (percentage >= 60.0) {
        printf("Percentage: %.2f%% -> Grade D\n", percentage);
    } else {
        printf("Percentage: %.2f%% -> Grade F\n", percentage);
    }

    return 0;
}
