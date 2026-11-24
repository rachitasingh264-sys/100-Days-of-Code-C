#include <stdio.h>

int main(void) {
    char str[100];
    char target;
    int count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    printf("Enter a character to count: ");
    if (scanf(" %c", &target) != 1) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", target, count);

    return 0;
}
