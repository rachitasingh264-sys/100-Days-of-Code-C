#include <stdio.h>

int main(void) {
    long long total_seconds;

    printf("Enter time in seconds: ");
    if (scanf("%lld", &total_seconds) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (total_seconds < 0) {
        printf("Time in seconds cannot be negative.\n");
        return 1;
    }

    long long hours = total_seconds / 3600;
    long long remaining_seconds = total_seconds % 3600;
    long long minutes = remaining_seconds / 60;
    long long seconds = remaining_seconds % 60;

    printf("Formatted time (HH:MM:SS): %02lld:%02lld:%02lld\n", hours, minutes, seconds);

    return 0;
}
