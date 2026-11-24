#include <stdio.h>

int find_first_occurrence(const int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; /* Keep searching left for an earlier occurrence */
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return first;
}

int find_last_occurrence(const int nums[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; /* Keep searching right for a later occurrence */
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return last;
}

int main(void) {
    int n, target;
    int nums[100];

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("-1, -1\n");
        return 0;
    }

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    printf("Enter target: ");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int first = find_first_occurrence(nums, n, target);
    int last = find_last_occurrence(nums, n, target);

    printf("%d, %d\n", first, last);

    return 0;
}
