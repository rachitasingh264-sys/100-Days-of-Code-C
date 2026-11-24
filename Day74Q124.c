#include <stdio.h>

static int read_filename(const char *prompt, char buf[], int size) {
    printf("%s", prompt);
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
    char src_name[256];
    char dst_name[256];

    if (!read_filename("Enter source filename: ", src_name, sizeof(src_name))) {
        return 1;
    }

    if (!read_filename("Enter destination filename: ", dst_name, sizeof(dst_name))) {
        return 1;
    }

    FILE *src = fopen(src_name, "r");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dst_name, "w");
    if (dst == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    long long copied_bytes = 0;

    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dst);
            return 1;
        }
        copied_bytes++;
    }

    if (ferror(src)) {
        perror("Error reading source file");
        fclose(src);
        fclose(dst);
        return 1;
    }

    if (fclose(src) != 0) {
        perror("Error closing source file");
        fclose(dst);
        return 1;
    }

    if (fclose(dst) != 0) {
        perror("Error closing destination file");
        return 1;
    }

    printf("Copied %lld bytes from '%s' to '%s'.\n", copied_bytes, src_name, dst_name);

    return 0;
}
