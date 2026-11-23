#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter an alphabet character: ");
    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int is_upper = (ch >= 'A' && ch <= 'Z');
    int is_lower = (ch >= 'a' && ch <= 'z');

    if (is_upper || is_lower) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("'%c' is a Vowel.\n", ch);
        } else {
            printf("'%c' is a Consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}
