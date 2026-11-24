#include <stdio.h>

int main(void) {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening numbers.txt");
        return 1;
    }

    long long sum = 0;
    long long count = 0;
    int num;

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (ferror(fp)) {
        perror("Error reading numbers.txt");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error closing numbers.txt");
        return 1;
    }

    if (count == 0) {
        printf("No valid integers found in numbers.txt.\n");
        return 0;
    }

    double average = (double)sum / (double)count;

    printf("Sum: %lld\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
