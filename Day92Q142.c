#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);

        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n=== All Student Records ===\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d -> Name: %s | Roll No: %d | Marks: %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
