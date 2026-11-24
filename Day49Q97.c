#include <stdio.h>

char to_upper_alpha(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return (char)(ch - ('a' - 'A'));
    }
    return ch;
}

int is_space_char(char ch) {
    return (ch == ' ' || ch == '\t');
}

int is_end_char(char ch) {
    return (ch == '\0' || ch == '\n' || ch == '\r');
}

int main(void) {
    char name[100];
    int at_word_start = 1;
    int printed_any = 0;

    printf("Enter full name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        for (int i = 0; !is_end_char(name[i]); i++) {
            char ch = name[i];

            if (is_space_char(ch)) {
                at_word_start = 1;
            } else if (at_word_start) {
                if (printed_any) {
                    putchar(' ');
                }
                putchar(to_upper_alpha(ch));
                printed_any = 1;
                at_word_start = 0;
            }
        }
        putchar('\n');
    }

    return 0;
}
