#include <stdio.h>

int main(void) {
    char name[100];
    int age;

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        perror("Error opening info.txt");
        return 1;
    }

    printf("Enter name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fclose(fp);
        return 1;
    }

    int len = 0;
    while (name[len] != '\0') {
        len++;
    }
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid age input.\n");
        fclose(fp);
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    if (fclose(fp) != 0) {
        perror("Error closing info.txt");
        return 1;
    }

    printf("Data successfully saved to info.txt.\n");

    return 0;
}
