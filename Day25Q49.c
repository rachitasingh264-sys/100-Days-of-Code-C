#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop sets the starting number for each row (from n down to 1)
    for (int i = n; i >= 1; i--) {
        // Inner loop prints numbers from 'i' up to 'n'
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        // Move to the next line after completing each row
        printf("\n");
    }

    return 0;
}
