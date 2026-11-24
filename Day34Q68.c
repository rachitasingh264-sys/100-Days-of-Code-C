#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array is empty; nothing to delete.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position! Must be between 1 and %d.\n", n);
        return 1;
    }

    // Convert 1-based position to 0-based index
    int targetIndex = pos - 1;

    // Shift elements after targetIndex one position to the left
    for (int i = targetIndex; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease logical element count
    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
