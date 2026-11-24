#include <stdio.h>

int main() {
    char binary[101]; // Buffer to hold up to 100 binary digits + null terminator

    printf("Enter a binary number: ");
    scanf("%100s", binary);

    // Validate input and print 1's complement
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid input! '%c' is not a binary digit.\n", binary[i]);
            return 1;
        }
    }

    printf("1's complement: ");
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0') {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");

    return 0;
}
