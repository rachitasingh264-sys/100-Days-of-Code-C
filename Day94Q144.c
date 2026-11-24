#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void print_student(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {"Riya Sharma", 101, 92.5f};

    print_student(s1);

    return 0;
}
