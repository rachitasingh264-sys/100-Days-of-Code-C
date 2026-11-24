#include <stdio.h>

int find_majority_element(const int nums[], int n) {
    int candidate = 0;
    int count = 0;

    /* Pass 1: Boyer-Moore candidate selection */
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    /* Pass 2: Verify that candidate occurs strictly more than floor(n / 2) times */
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            freq++;
        }
    }

    if (freq > n / 2) {
        return candidate;
    }

    return -1;
}

int main(void) {
    int n;
    int nums[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("-1\n");
        return 0;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    printf("%d\n", find_majority_element(nums, n));

    return 0;
}
