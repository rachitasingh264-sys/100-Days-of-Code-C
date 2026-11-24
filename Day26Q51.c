#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop sets the starting number for each row (from n down to 1)
    for (int i = n; i >= 1; i--) {
        // Print leading spaces: (i - 1) spaces so the right edge stays aligned
        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        // Print consecutive numbers from 'i' up to 'n'
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }

        // Move to the next line after completing each row
        printf("\n");
    }

    return 0;
}
