#include <stdio.h>

void merge_sorted_arrays(const int arr1[], int m,
                         const int arr2[], int n,
                         int merged[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < m) {
        merged[k++] = arr1[i++];
    }

    while (j < n) {
        merged[k++] = arr2[j++];
    }
}

int main(void) {
    int m, n;
    int arr1[100];
    int arr2[100];
    int merged[200];

    printf("Enter size of first sorted array (m): ");
    if (scanf("%d", &m) != 1 || m < 0 || m > 100) {
        return 1;
    }

    if (m > 0) {
        printf("Enter %d sorted elements for first array: ", m);
        for (int i = 0; i < m; i++) {
            if (scanf("%d", &arr1[i]) != 1) {
                return 1;
            }
        }
    }

    printf("Enter size of second sorted array (n): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 100) {
        return 1;
    }

    if (n > 0) {
        printf("Enter %d sorted elements for second array: ", n);
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &arr2[j]) != 1) {
                return 1;
            }
        }
    }

    merge_sorted_arrays(arr1, m, arr2, n, merged);

    for (int k = 0; k < m + n; k++) {
        if (k > 0) {
            printf(" ");
        }
        printf("%d", merged[k]);
    }
    printf("\n");

    return 0;
}
