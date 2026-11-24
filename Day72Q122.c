#include <stdio.h>

int main(void) {
    char line[256];

    FILE *fp = fopen("info.txt", "r");
    if (fp == NULL) {
        perror("Error opening info.txt");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    if (ferror(fp)) {
        perror("Error reading info.txt");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error closing info.txt");
        return 1;
    }

    return 0;
}
