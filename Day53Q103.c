#include <stdio.h>

int find_pivot_index(const int arr[], int n) {
    long long total_sum = 0;
    long long left_sum = 0;

    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        long long right_sum = total_sum - left_sum - arr[i];
        if (left_sum == right_sum) {
            return i; /* Leftmost index where left sum equals right sum */
        }
        left_sum += arr[i];
    }

    return -1;
}

int main(void) {
    int n;
    int arr[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("%d\n", find_pivot_index(arr, n));

    return 0;
}
