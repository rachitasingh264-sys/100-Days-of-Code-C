#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (num != 0) {
        if (num > 0) {
            printf("%d is Positive.\n", num);
        } else {
            printf("%d is Negative.\n", num);
        }
    } else {
        printf("The number is Zero.\n");
    }

    return 0;
}
