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

    long long window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    long long max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += (long long)arr[i] - (long long)arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}
