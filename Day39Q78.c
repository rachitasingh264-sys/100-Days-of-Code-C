#include <stdio.h>

int main() {
    int n;
    long long diagSum = 0;

    printf("Enter the size (n) of the square matrix (n x n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive matrix size.\n");
        return 1;
    }

    int matrix[n][n];

    // Read elements of the n x n square matrix
    printf("Enter %d elements (%d x %d):\n", n * n, n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum main diagonal elements where row index equals column index (i == j)
    for (int i = 0; i < n; i++) {
        diagSum += matrix[i][i];
    }

    printf("Sum of main diagonal elements = %lld\n", diagSum);

    return 0;
}
