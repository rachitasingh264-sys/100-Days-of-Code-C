#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void print_status_message(enum Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}

int main() {
    enum Status current_status;

    current_status = SUCCESS;
    print_status_message(current_status);

    current_status = FAILURE;
    print_status_message(current_status);

    current_status = TIMEOUT;
    print_status_message(current_status);

    return 0;
}
