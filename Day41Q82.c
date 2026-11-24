#include <stdio.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            /* Skip the trailing newline added by fgets so no extra blank line prints */
            if (str[i] == '\n') {
                continue;
            }
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
