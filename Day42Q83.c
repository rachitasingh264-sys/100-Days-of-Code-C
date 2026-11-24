#include <stdio.h>

int main(void) {
    char str[100];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];

            /* Normalize uppercase letters to lowercase */
            if (ch >= 'A' && ch <= 'Z') {
                ch = (char)(ch + ('a' - 'A'));
            }

            if (ch >= 'a' && ch <= 'z') {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        printf("Vowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);
    }

    return 0;
}
