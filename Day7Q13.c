#include <stdio.h>

int main(void) {
    int year;

    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid integer year.\n");
        return 1;
    }

    if (year <= 0) {
        printf("Please enter a positive year (greater than 0).\n");
        return 1;
    }

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
