#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;
    int is_palindrome = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        /* Compute length manually */
        while (str[len] != '\0') {
            len++;
        }

        /* Remove trailing newline added by fgets */
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        int start = 0;
        int end = len - 1;

        while (start < end) {
            if (str[start] != str[end]) {
                is_palindrome = 0;
                break;
            }
            start++;
            end--;
        }

        if (is_palindrome) {
            printf("Palindrome\n");
        } else {
            printf("Not a palindrome\n");
        }
    }

    return 0;
}
