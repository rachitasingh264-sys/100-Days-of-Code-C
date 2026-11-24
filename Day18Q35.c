#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle zero as a special case
    if (num == 0) {
        printf("Every non-zero integer is a factor of 0.\n");
        return 0;
    }

    // Use absolute value so negative numbers share the same positive factors
    int target = (num < 0) ? -num : num;

    printf("Factors of %d: ", num);
    for (int i = 1; i <= target; i++) {
        if (target % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
