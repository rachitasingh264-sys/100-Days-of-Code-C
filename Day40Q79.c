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

    // Total number of diagonals in a (rows x cols) matrix is (rows + cols - 1)
    int totalDiagonals = rows + cols - 1;

    printf("Diagonal traversal of the matrix:\n");
    for (int d = 0; d < totalDiagonals; d++) {
        // For a given diagonal index d = i + j, starting row is min(d, rows - 1)
        // and we move up-right (i--, j++) while inside matrix bounds
        int i = (d < rows) ? d : rows - 1;
        int j = d - i;

        while (i >= 0 && j < cols) {
            printf("%d ", matrix[i][j]);
            i--;
            j++;
        }
        printf("\n");
    }

    return 0;
}
