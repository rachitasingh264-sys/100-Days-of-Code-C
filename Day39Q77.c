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

    // A main diagonal exists cleanly for square matrices (rows == cols)
    if (rows != cols) {
        printf("Matrix is not square; please enter equal rows and columns to check the main diagonal.\n");
        return 0;
    }

    int isDistinct = 1; // Assume all diagonal elements are distinct

    // Compare every pair of main-diagonal elements matrix[i][i] and matrix[j][j]
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("All main diagonal elements are distinct.\n");
    } else {
        printf("Main diagonal elements are NOT distinct (duplicate found).\n");
    }

    return 0;
}
