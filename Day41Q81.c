#include <stdio.h>

int count_chars(const char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char text[100];

    printf("Enter a string: ");
    if (fgets(text, sizeof(text), stdin) != NULL) {
        int length = count_chars(text);
        printf("Character count (including newline if entered): %d\n", length);
    }

    return 0;
}
