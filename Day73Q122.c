#include <stdio.h>

static int is_space_char(int ch) {
    return ch == ' ' || ch == '\n' || ch == '\t' ||
           ch == '\r' || ch == '\v' || ch == '\f';
}

int main(void) {
    char filename[256];

    printf("Enter filename: ");
    if (fgets(filename, sizeof(filename), stdin) == NULL) {
        return 1;
    }

    int len = 0;
    while (filename[len] != '\0') {
        len++;
    }
    if (len > 0 && filename[len - 1] == '\n') {
        filename[len - 1] = '\0';
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    long long characters = 0;
    long long words = 0;
    long long lines = 0;
    int in_word = 0;
    int last_ch = EOF;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        last_ch = ch;

        if (ch == '\n') {
            lines++;
        }

        if (is_space_char(ch)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && last_ch != '\n') {
        lines++;
    }

    if (ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    fclose(fp);

    printf("Characters: %lld\n", characters);
    printf("Words: %lld\n", words);
    printf("Lines: %lld\n", lines);

    return 0;
}
