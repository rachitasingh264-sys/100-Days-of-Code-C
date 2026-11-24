#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls the current row number (1 to 5)
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints 'i' stars on row 'i'
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
