#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

const char* gender_to_string(enum Gender g) {
    switch (g) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        case OTHER:
            return "Other";
        default:
            return "Unknown";
    }
}

int main() {
    struct Person p1 = {"Aarav", 24, MALE};
    struct Person p2 = {"Meera", 22, FEMALE};

    printf("Name: %s, Gender: %s\n", p1.name, gender_to_string(p1.gender));
    printf("Name: %s, Gender: %s\n", p2.name, gender_to_string(p2.gender));

    return 0;
}
