#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        while (str[len] != '\0') {
            len++;
        }

        /* Remove trailing newline added by fgets */
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        for (int start = 0; start < len; start++) {
            for (int end = start; end < len; end++) {
                for (int k = start; k <= end; k++) {
                    putchar(str[k]);
                }
                putchar('\n');
            }
        }
    }

    return 0;
}
