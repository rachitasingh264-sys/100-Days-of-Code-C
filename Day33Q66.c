#include <stdio.h>

int main() {
    int n, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative array size.\n");
        return 1;
    }

    // Extra slot (+1) to accommodate the newly inserted element
    int arr[n + 1];

    if (n > 0) {
        printf("Enter %d elements in sorted (ascending) order:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    // Shift elements greater than 'key' one position to the right
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Place 'key' into the open slot
    arr[i + 1] = key;
    n++;

    printf("Array after insertion:\n");
    for (int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
