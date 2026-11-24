#include <stdio.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = (char)(str[i] + ('a' - 'A'));
            } else if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = (char)(str[i] - ('a' - 'A'));
            }
        }

        printf("Toggled string: %s", str);
    }

    return 0;
}
