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
    long long rowSum[rows]; // 1D array to store the sum of each row

    printf("Enter %d elements (%d x %d):\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Reset sum at the start of each new row
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the sums stored in the 1D array
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %lld\n", i + 1, rowSum[i]);
    }

    return 0;
}
