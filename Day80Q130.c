#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LEN 99

static void clear_stdin_line(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}

static int read_trimmed_line(char buf[], int size) {
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
    const char *filename = "students.txt";
    int n;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }
    clear_stdin_line();

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Error opening students.txt for writing");
        return 1;
    }

    char name[NAME_LEN + 1];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        if (!read_trimmed_line(name, sizeof(name))) {
            fclose(fp);
            return 1;
        }

        printf("Enter roll number: ");
        if (scanf("%d", &roll) != 1) {
            printf("Invalid roll number.\n");
            fclose(fp);
            return 1;
        }

        printf("Enter marks: ");
        if (scanf("%f", &marks) != 1) {
            printf("Invalid marks.\n");
            fclose(fp);
            return 1;
        }
        clear_stdin_line();

        /* Pipe-delimited format preserves spaces inside student names */
        fprintf(fp, "%s|%d|%.2f\n", name, roll, marks);
    }

    if (fclose(fp) != 0) {
        perror("Error closing students.txt after writing");
        return 1;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Error opening students.txt for reading");
        return 1;
    }

    printf("\n--- Stored Student Records ---\n");
    while (fscanf(fp, " %99[^|]|%d|%f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    if (ferror(fp)) {
        perror("Error reading students.txt");
        fclose(fp);
        return 1;
    }

    if (fclose(fp) != 0) {
        perror("Error closing students.txt after reading");
        return 1;
    }

    return 0;
}
