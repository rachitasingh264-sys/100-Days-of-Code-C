#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    if (n1 <= 0) {
        printf("Please enter a positive size for the first array.\n");
        return 1;
    }

    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    if (n2 <= 0) {
        printf("Please enter a positive size for the second array.\n");
        return 1;
    }

    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    int k = 0;

    // Copy all elements from the first array
    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }

    // Copy all elements from the second array
    for (int i = 0; i < n2; i++) {
        merged[k++] = arr2[i];
    }

    // Print the merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
