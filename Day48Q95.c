#include <stdio.h>

void strip_newline(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            return;
        }
        i++;
    }
}

int get_length(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int is_rotation(const char s1[], const char s2[], int len) {
    if (len == 0) {
        return 1;
    }

    for (int shift = 0; shift < len; shift++) {
        int match = 1;
        for (int i = 0; i < len; i++) {
            if (s1[(shift + i) % len] != s2[i]) {
                match = 0;
                break;
            }
        }
        if (match) {
            return 1;
        }
    }

    return 0;
}

int main(void) {
    char s1[100], s2[100];

    printf("Enter first string: ");
    if (fgets(s1, sizeof(s1), stdin) == NULL) {
        return 1;
    }

    printf("Enter second string: ");
    if (fgets(s2, sizeof(s2), stdin) == NULL) {
        return 1;
    }

    strip_newline(s1);
    strip_newline(s2);

    int len1 = get_length(s1);
    int len2 = get_length(s2);

    if (len1 == len2 && is_rotation(s1, s2, len1)) {
        printf("Rotation of each other\n");
    } else {
        printf("Not a rotation of each other\n");
    }

    return 0;
}
