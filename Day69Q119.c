#include <stdio.h>

#define MAX_N 100
#define MAX_VAL 10000

int main(void) {
    int n;
    int arr[MAX_N];
    int seen[MAX_VAL + 1] = {0};

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 1 || n > MAX_N) {
        return 1;
    }

    printf("Enter %d integers (0 to %d, one repeated): ", n, MAX_VAL);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    /* Single pass: stop as soon as an already-seen value is encountered */
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (val < 0 || val > MAX_VAL) {
            continue;
        }

        if (seen[val]) {
            printf("%d\n", val);
            return 0;
        }

        seen[val] = 1;
    }

    printf("-1\n");

    return 0;
}
