#include <stdio.h>

int main(void) {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];

            /* Skip the newline added by fgets when Enter is pressed */
            if (ch == '\n') {
                continue;
            }

            if (ch == ' ') {
                spaces++;
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                /* Alphabetic characters are neither spaces, digits, nor special characters */
            } else {
                special++;
            }
        }

        printf("Spaces: %d\n", spaces);
        printf("Digits: %d\n", digits);
        printf("Special characters: %d\n", special);
    }

    return 0;
}
