#include <stdio.h>

int main(void) {
    int n;
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

    long long current_sum = arr[0];
    long long max_sum = arr[0];

    for (int i = 1; i < n; i++) {
        long long extend_sum = current_sum + (long long)arr[i];
        current_sum = (extend_sum > (long long)arr[i]) ? extend_sum : (long long)arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%lld\n", max_sum);

    return 0;
}
