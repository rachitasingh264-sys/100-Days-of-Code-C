#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Please enter positive values for rows and columns.\n");
        return 1;
    }

    int matrix[rows][cols];

    // Read matrix elements
    printf("Enter %d elements (%d x %d):\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Only a square matrix (rows == cols) can be symmetric
    if (rows != cols) {
        printf("Matrix is NOT symmetric (not a square matrix).\n");
        return 0;
    }

    int isSymmetric = 1; // Assume symmetric until a mismatch is found

    // Compare elements above and below the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is NOT symmetric.\n");
    }

    return 0;
}
