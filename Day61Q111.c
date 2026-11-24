#include <stdio.h>

int main(void) {
    int n, k;
    int arr[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Enter subarray size k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid window size k.\n");
        return 1;
    }

    int total_windows = n - k + 1;
    for (int i = 0; i < total_windows; i++) {
        int first_neg = 0;

        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_neg = arr[j];
                break; /* First negative integer in window [i .. i + k - 1] */
            }
        }

        if (i > 0) {
            printf(" ");
        }
        printf("%d", first_neg);
    }
    printf("\n");

    return 0;
}
