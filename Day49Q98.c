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
    int starts[50];
    int ends[50];
    int word_count = 0;

    printf("Enter full name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        int i = 0;
        while (!is_end_char(name[i])) {
            if (!is_space_char(name[i])) {
                int start = i;
                while (!is_end_char(name[i]) && !is_space_char(name[i])) {
                    i++;
                }
                int end = i - 1;
                if (word_count < 50) {
                    starts[word_count] = start;
                    ends[word_count] = end;
                    word_count++;
                }
            } else {
                i++;
            }
        }

        if (word_count == 0) {
            printf("No name entered.\n");
            return 0;
        }

        /* Print initials (with periods) for all words except the surname */
        for (int w = 0; w < word_count - 1; w++) {
            putchar(to_upper_alpha(name[starts[w]]));
            putchar('.');
            putchar(' ');
        }

        /* Print the surname in full */
        for (int idx = starts[word_count - 1]; idx <= ends[word_count - 1]; idx++) {
            putchar(name[idx]);
        }
        putchar('\n');
    }

    return 0;
}
