#include <stdio.h>

int main() {
    int rows, cols;
    long long sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Please enter positive values for rows and columns.\n");
        return 1;
    }

    int matrix[rows][cols];

    // Read matrix elements and accumulate their total sum
    printf("Enter %d elements (%d x %d):\n", rows * cols, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum of all matrix elements = %lld\n", sum);

    return 0;
}
