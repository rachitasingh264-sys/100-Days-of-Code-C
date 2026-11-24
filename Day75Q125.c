#include <stdio.h>

static int read_line_trimmed(char buf[], int size) {
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
    return 1;
}

int main(void) {
    char filename[256];
    char new_line[256];

    printf("Enter filename: ");
    if (!read_line_trimmed(filename, sizeof(filename)) || filename[0] == '\0') {
        printf("Invalid filename.\n");
        return 1;
    }

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("Error opening file in append mode");
        return 1;
    }

    printf("Enter line to append: ");
    if (!read_line_trimmed(new_line, sizeof(new_line))) {
        fclose(fp);
        return 1;
    }

    if (fputs(new_line, fp) == EOF || fputc('\n', fp) == EOF) {
        perror("Error appending to file");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error closing file");
        return 1;
    }

    printf("Appended line to '%s'.\n", filename);

    return 0;
}
