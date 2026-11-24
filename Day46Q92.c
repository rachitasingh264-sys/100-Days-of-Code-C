#include <stdio.h>

int main(void) {
    char str[100];
    int seen[26] = {0};
    char first_repeat = '\0';

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if (ch >= 'a' && ch <= 'z') {
                int idx = ch - 'a';
                if (seen[idx]) {
                    first_repeat = ch;
                    break;
                }
                seen[idx] = 1;
            }
        }

        if (first_repeat != '\0') {
            printf("First repeating lowercase alphabet: %c\n", first_repeat);
        } else {
            printf("No repeating lowercase alphabet found.\n");
        }
    }

    return 0;
}
