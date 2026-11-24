#include <stdio.h>

int main() {
    int rows = 5, cols = 5;

    // Outer loop controls the number of rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints stars in each row
        for (int j = 1; j <= cols; j++) {
            printf("*");
        }
        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
