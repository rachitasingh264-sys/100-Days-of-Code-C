#include <stdio.h>

int is_separator(char ch) {
    return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r' || ch == '\0');
}

void reverse_range(char str[], int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    char sentence[200];

    printf("Enter a sentence: ");
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        int i = 0;
        while (sentence[i] != '\0') {
            if (!is_separator(sentence[i])) {
                int start = i;
                while (!is_separator(sentence[i])) {
                    i++;
                }
                int end = i - 1;
                reverse_range(sentence, start, end);
            } else {
                i++;
            }
        }

        printf("Result: %s", sentence);
    }

    return 0;
}
