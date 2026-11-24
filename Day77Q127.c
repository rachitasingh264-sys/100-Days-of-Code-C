#include <stdio.h>

static int to_upper_byte(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    return ch;
}

int main(void) {
    FILE *in_fp = fopen("input.txt", "r");
    if (in_fp == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    FILE *out_fp = fopen("output.txt", "w");
    if (out_fp == NULL) {
        perror("Error opening output.txt");
        fclose(in_fp);
        return 1;
    }

    int ch;
    long long converted_chars = 0;

    while ((ch = fgetc(in_fp)) != EOF) {
        int out_ch = to_upper_byte(ch);
        if (fputc(out_ch, out_fp) == EOF) {
            perror("Error writing to output.txt");
            fclose(in_fp);
            fclose(out_fp);
            return 1;
        }
        converted_chars++;
    }

    if (ferror(in_fp)) {
        perror("Error reading input.txt");
        fclose(in_fp);
        fclose(out_fp);
        return 1;
    }

    if (fclose(in_fp) != 0) {
        perror("Error closing input.txt");
        fclose(out_fp);
        return 1;
    }

    if (fclose(out_fp) != 0) {
        perror("Error closing output.txt");
        return 1;
    }

    printf("Converted %lld bytes from input.txt to output.txt.\n", converted_chars);

    return 0;
}
