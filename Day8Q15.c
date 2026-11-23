#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Alphabet (ASCII: %d).\n", ch, ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Alphabet (ASCII: %d).\n", ch, ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit (ASCII: %d).\n", ch, ch);
    } else {
        printf("'%c' is a Special Character (ASCII: %d).\n", ch, ch);
    }

    return 0;
}
