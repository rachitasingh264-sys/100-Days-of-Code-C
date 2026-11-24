#include <stdio.h>

int main() {
    int n;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive array size.\n");
        return 1;
    }

    int arr[n];

    // Read array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Classify and count each element
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive elements = %d\n", positiveCount);
    printf("Negative elements = %d\n", negativeCount);
    printf("Zero elements = %d\n", zeroCount);

    return 0;
}
