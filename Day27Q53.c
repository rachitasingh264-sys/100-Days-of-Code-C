#include <stdio.h>

int main() {
    int n = 5; // Number of rows in the upper half (including the 9-star middle row)

    // Upper half (rows 1 to 5): 1, 3, 5, 7, 9 stars
    for (int i = 1; i <= n; i++) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (rows 6 to 9): 7, 5, 3, 1 stars
    for (int i = n - 1; i >= 1; i--) {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
