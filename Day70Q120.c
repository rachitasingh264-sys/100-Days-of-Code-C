#include <stdio.h>

static char to_lower_ascii(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return (char)(ch + ('a' - 'A'));
    }
    return ch;
}

static char to_upper_ascii(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return (char)(ch - ('a' - 'A'));
    }
    return ch;
}

void to_sentence_case(char str[]) {
    int capitalize_next = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (capitalize_next) {
                str[i] = to_upper_ascii(ch);
                capitalize_next = 0;
            } else {
                str[i] = to_lower_ascii(ch);
            }
        } else if (ch == '.' || ch == '!' || ch == '?') {
            capitalize_next = 1;
        }
    }
}

int main(void) {
    char str[256];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    to_sentence_case(str);
    printf("%s\n", str);

    return 0;
}
