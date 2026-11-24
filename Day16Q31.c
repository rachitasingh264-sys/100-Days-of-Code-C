#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits (up to 32-bit integer)
    int i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle 0 as a special case
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Store remainders when dividing by 2
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print the array in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
