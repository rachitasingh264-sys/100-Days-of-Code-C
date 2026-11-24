#include <stdio.h>

int main(void) {
    int n;
    int arr[100];

    printf("Enter array size n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        return 1;
    }

    printf("Enter %d integers from 0 to %d (one missing): ", n, n);
    long long actual_sum = 0;
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
        actual_sum += arr[i];
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    long long missing = expected_sum - actual_sum;

    printf("%lld\n", missing);

    return 0;
}
