#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST,
    ROLE_COUNT // Tracks total number of roles
};

int main() {
    const enum Role roles[] = {ADMIN, USER, GUEST};
    const char *role_names[] = {"ADMIN", "USER", "GUEST"};
    const int count = sizeof(roles) / sizeof(roles[0]);

    for (int i = 0; i < count; i++) {
        printf("%s = %d\n", role_names[i], roles[i]);
    }

    return 0;
}
