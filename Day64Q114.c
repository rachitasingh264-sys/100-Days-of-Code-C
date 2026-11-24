#include <stdio.h>

int main(void) {
    char s[256];
    int last_index[256];

    for (int i = 0; i < 256; i++) {
        last_index[i] = -1;
    }

    printf("Enter a string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int left = 0;
    int max_len = 0;

    for (int right = 0; right < len; right++) {
        unsigned char ch = (unsigned char)s[right];

        if (last_index[ch] >= left) {
            left = last_index[ch] + 1;
        }

        last_index[ch] = right;

        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d\n", max_len);

    return 0;
}
