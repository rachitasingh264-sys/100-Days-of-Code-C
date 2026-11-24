#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2;

    printf("Menu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch ((enum Menu)choice) {
        case ADD:
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("Result: %.2lf\n", num1 * num2);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
