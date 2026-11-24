#include <stdio.h>

int is_word_char(char ch) {
    return (ch != ' ' && ch != '\t' && ch != '\n' && ch != '\r');
}

int main(void) {
    char sentence[200];
    int curr_len = 0;
    int curr_start = 0;
    int max_len = 0;
    int max_start = 0;

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        for (int i = 0; ; i++) {
            if (is_word_char(sentence[i])) {
                if (curr_len == 0) {
                    curr_start = i;
                }
                curr_len++;
            } else {
                if (curr_len > max_len) {
                    max_len = curr_len;
                    max_start = curr_start;
                }
                curr_len = 0;

                if (sentence[i] == '\0') {
                    break;
                }
            }
        }

        if (max_len > 0) {
            printf("Longest word: ");
            for (int i = 0; i < max_len; i++) {
                putchar(sentence[max_start + i]);
            }
            printf("\nLength: %d\n", max_len);
        } else {
            printf("No word found.\n");
        }
    }

    return 0;
}
