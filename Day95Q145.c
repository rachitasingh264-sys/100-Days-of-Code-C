#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student get_top_student(const struct Student students[], int count) {
    int top_index = 0;

    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    return students[top_index];
}

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

    struct Student top_student = get_top_student(students, NUM_STUDENTS);

    printf("\n=== Top Student Details ===\n");
    printf("Name: %s\n", top_student.name);
    printf("Roll No: %d\n", top_student.roll_no);
    printf("Marks: %.2f\n", top_student.marks);

    return 0;
}
