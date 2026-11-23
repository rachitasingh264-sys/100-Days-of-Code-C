#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1) {
        printf("Invalid input for principal.\n");
        return 1;
    }

    printf("Enter annual interest rate (in %%): ");
    if (scanf("%lf", &rate) != 1) {
        printf("Invalid input for rate.\n");
        return 1;
    }

    printf("Enter time period (in years): ");
    if (scanf("%lf", &time) != 1) {
        printf("Invalid input for time.\n");
        return 1;
    }

    if (principal < 0.0 || rate < 0.0 || time < 0.0) {
        printf("Principal, rate, and time must be non-negative.\n");
        return 1;
    }

    double simple_interest = (principal * rate * time) / 100.0;
    double amount = principal * pow(1.0 + (rate / 100.0), time);
    double compound_interest = amount - principal;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount (Compound): %.2f\n", amount);

    return 0;
}
