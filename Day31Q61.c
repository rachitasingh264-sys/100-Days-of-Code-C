#include <stdio.h>

int main() {
    int n, target, foundIndex = -1;

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

    // Read target element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search: check elements sequentially from index 0 to n - 1
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; // Stop at the first matching element
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index %d (position %d).\n", target, foundIndex, foundIndex + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
