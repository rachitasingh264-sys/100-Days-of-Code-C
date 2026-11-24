#include <stdio.h>

int main() {
    int n, pos, val;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative array size.\n");
        return 1;
    }

    // Allocate n + 1 slots so the new element fits without out-of-bounds access
    int arr[n + 1];

    if (n > 0) {
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Must be between 1 and %d.\n", n + 1);
        return 1;
    }

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // Convert 1-based position to 0-based index
    int targetIndex = pos - 1;

    // Shift elements from targetIndex..n-1 one slot to the right
    for (int i = n - 1; i >= targetIndex; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element and increment the active element count
    arr[targetIndex] = val;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
