#include <stdio.h>

int is_vowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = (char)(ch + ('a' - 'A'));
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main(void) {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (!is_vowel(str[i])) {
                str[j++] = str[i];
            }
        }
        str[j] = '\0';

        printf("String without vowels: %s", str);
    }

    return 0;
}
