#include <stdio.h>

// Helper function to reverse subarray arr[start..end] in place
void reverseSubarray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate right (k): ");
    scanf("%d", &k);

    // Normalize k so k >= n or k < 0 is handled cleanly
    k = k % n;
    if (k < 0) {
        k += n; // Optional: converts negative right rotation into equivalent positive right rotation
    }

    if (k > 0) {
        // 1. Reverse the entire array
        reverseSubarray(arr, 0, n - 1);
        // 2. Reverse the first k elements
        reverseSubarray(arr, 0, k - 1);
        // 3. Reverse the remaining n - k elements
        reverseSubarray(arr, k, n - 1);
    }

    printf("Array after rotating right by %d position%s:\n", k, k == 1 ? "" : "s");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
