#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0) {
        printf("Matrix dimensions must be positive integers.\n");
        return 1;
    }

    // Matrix multiplication requires columns of A to equal rows of B
    if (c1 != r2) {
        printf("Matrix multiplication not possible: columns of A (%d) != rows of B (%d).\n", c1, r2);
        return 1;
    }

    int a[r1][c1], b[r2][c2];
    long long prod[r1][c2];

    printf("Enter %d elements for Matrix A (%d x %d):\n", r1 * c1, r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter %d elements for Matrix B (%d x %d):\n", r2 * c2, r2, c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Compute product matrix C of size (r1 x c2)
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            long long sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }
            prod[i][j] = sum;
        }
    }

    printf("Product matrix (%d x %d):\n", r1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%lld ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
