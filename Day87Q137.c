#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

void display_role_message(enum Role role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access to settings, users, and data.\n");
            break;
        case USER:
            printf("Welcome, User! You can view and manage your personal content.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have read-only access to public content.\n");
            break;
        default:
            printf("Invalid role selected.\n");
            break;
    }
}

int main() {
    int choice;

    printf("Select a user role:\n");
    printf("1. ADMIN\n");
    printf("2. USER\n");
    printf("3. GUEST\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    display_role_message((enum Role)choice);

    return 0;
}
