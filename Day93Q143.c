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

    int top_index = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    printf("\n=== Student with Highest Marks ===\n");
    printf("Name: %s\n", students[top_index].name);
    printf("Roll No: %d\n", students[top_index].roll_no);
    printf("Marks: %.2f\n", students[top_index].marks);

    return 0;
}
