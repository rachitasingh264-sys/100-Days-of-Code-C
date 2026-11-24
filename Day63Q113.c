#include <stdio.h>

void sort_ascending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

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

    printf("Enter k (1 to %d): ", n);
    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    sort_ascending(arr, n);
    printf("%d\n", arr[k - 1]);

    return 0;
}
