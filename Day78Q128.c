#include <stdio.h>

static char lower_ascii(int ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return (char)(ch - 'A' + 'a');
    }
    return (char)ch;
}

static int is_vowel_lower(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
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

    long long vowels = 0;
    long long consonants = 0;
    int ch;

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char c = lower_ascii(ch);
            if (is_vowel_lower(c)) {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    if (ferror(fp)) {
        perror("Error reading file");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error closing file");
        return 1;
    }

    printf("Vowels: %lld\n", vowels);
    printf("Consonants: %lld\n", consonants);

    return 0;
}
