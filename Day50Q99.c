#include <stdio.h>

int main(void) {
    char date[32];
    char day[3], month[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    if (scanf("%31s", date) != 1) {
        return 1;
    }

    /* Extract dd, mm, and yyyy around '/' separators */
    if (sscanf(date, "%2[0-9]/%2[0-9]/%4[0-9]", day, month, year) != 3) {
        printf("Invalid date format. Expected dd/04/yyyy.\n");
        return 1;
    }
    day[2] = '\0';
    month[2] = '\0';
    year[4] = '\0';

    if (month[0] == '0' && month[1] == '4') {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    } else {
        printf("Month is not 04 (April). Received month: %s\n", month);
    }

    return 0;
}
