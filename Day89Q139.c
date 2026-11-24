#include <stdio.h>

enum ErrorCode {
    ERR_NONE = 0,
    ERR_NOT_FOUND = 404,
    ERR_SERVER = 500,
    ERR_CUSTOM = -1
};

int main() {
    enum ErrorCode code = ERR_NOT_FOUND;
    int raw_value = code; // Enum converts directly to an int

    printf("ERR_NONE stored value: %d\n", ERR_NONE);
    printf("ERR_NOT_FOUND stored value: %d\n", code);
    printf("Copied to plain int: %d\n", raw_value);
    printf("Arithmetic (ERR_SERVER + 3): %d\n", ERR_SERVER + 3);
    printf("ERR_CUSTOM stored value: %d\n", ERR_CUSTOM);
    printf("Size of enum ErrorCode variable: %zu bytes\n", sizeof(code));

    return 0;
}
