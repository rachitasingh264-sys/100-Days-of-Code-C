#include <stdio.h>

static int read_filename(char buf[], int size) {
    printf("Enter filename: ");
    if (fgets(buf, size, stdin) == NULL) {
        return 0;
    }

    int len = 0;
    while (buf[len] != '\0') {
        len++;
    }
    if (len > 0 && buf[len - 1] == '\n') {
        buf[len - 1] = '\0';
    }
    return len > 0;
}

int main(void) {
    char filename[256];
    char line[256];

    if (!read_filename(filename, sizeof(filename)) || filename[0] == '\0') {
        printf("Error: Invalid or empty filename.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error: Cannot open file");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    if (ferror(fp)) {
        perror("Error: Failed while reading file");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error: Failed while closing file");
        return 1;
    }

    return 0;
}
