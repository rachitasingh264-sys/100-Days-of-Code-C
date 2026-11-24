#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop controls the current row (1 to 5)
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces: 0 on row 1, 1 on row 2, ..., (i - 1) on row i
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        // Print decreasing stars: 5 on row 1, 4 on row 2, ..., (rows - i + 1) on row i
        for (int star = 1; star <= rows - i + 1; star++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
