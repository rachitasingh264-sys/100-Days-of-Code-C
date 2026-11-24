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

    for (int i = 0; i < n; i++) {
        int next_greater = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break; /* Nearest element strictly to the right */
            }
        }

        if (i > 0) {
            printf(", ");
        }
        printf("%d", next_greater);
    }
    printf("\n");

    return 0;
}
