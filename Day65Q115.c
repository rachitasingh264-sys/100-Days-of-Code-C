#include <stdio.h>

static int read_lowercase_line(char buf[], int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0';
        return 0;
    }

    int len = 0;
    while (buf[len] != '\0') {
        len++;
    }
    if (len > 0 && buf[len - 1] == '\n') {
        buf[len - 1] = '\0';
        len--;
    }
    return len;
}

int are_anagrams(const char s[], int len_s, const char t[], int len_t) {
    if (len_s != len_t) {
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < len_s; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a']++;
        }
        if (t[i] >= 'a' && t[i] <= 'z') {
            freq[t[i] - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main(void) {
    char s[256];
    char t[256];

    printf("Enter first string: ");
    int len_s = read_lowercase_line(s, sizeof(s));

    printf("Enter second string: ");
    int len_t = read_lowercase_line(t, sizeof(t));

    if (are_anagrams(s, len_s, t, len_t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
