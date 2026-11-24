#include <stdio.h>

int main() {
    int n, target;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive array size.\n");
        return 1;
    }

    int arr[n];

    // Read sorted elements (ascending order)
    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1, foundIndex = -1;

    while (low <= high) {
        // Avoids integer overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;  // Discard left half including mid
        } else {
            high = mid - 1; // Discard right half including mid
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index %d (position %d).\n",
               target, foundIndex, foundIndex + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
