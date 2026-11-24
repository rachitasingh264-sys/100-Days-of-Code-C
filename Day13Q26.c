#include <stdio.h>

int main() {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
