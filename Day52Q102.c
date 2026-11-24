#include <stdio.h>

int find_ceil_index(const int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;        /* Valid candidate; look left for first occurrence */
            high = mid - 1;
        } else {
            low = mid + 1;    /* Need a value >= x, so look right */
        }
    }

    return ans;
}

int main(void) {
    int n, x;
    int arr[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Enter x: ");
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    printf("%d\n", find_ceil_index(arr, n, x));

    return 0;
}
