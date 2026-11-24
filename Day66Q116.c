#include <stdio.h>

int main(void) {
    int n, target;
    int nums[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 100) {
        printf("-1 -1\n");
        return 0;
    }

    printf("Enter %d positive integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    printf("Enter target: ");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((long long)nums[i] + (long long)nums[j] == (long long)target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");

    return 0;
}
