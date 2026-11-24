#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        /* Find string length */
        while (str[len] != '\0') {
            len++;
        }

        /* Strip trailing newline if present so it isn't moved to the front */
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        /* Two-pointer swap in place */
        int start = 0;
        int end = len - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        printf("Reversed string: %s\n", str);
    }

    return 0;
}
