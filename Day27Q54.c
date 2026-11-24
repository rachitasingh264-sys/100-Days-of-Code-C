#include <stdio.h>

int main() {
    int n = 4; // Half-height (4 rows in upper half, 3 rows in lower half)

    // Upper half (rows 1 to 4): spaces = 3, 2, 1, 0; stars = 1, 3, 5, 7
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (rows 5 to 7): spaces = 1, 2, 3; stars = 5, 3, 1
    for (int i = n - 1; i >= 1; i--) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
