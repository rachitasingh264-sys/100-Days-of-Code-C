#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    const char *month_names[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    for (enum Month m = JAN; m <= DEC; m++) {
        int days;

        switch (m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case DEC:
                days = 31;
                break;
            case APR: case JUN: case SEP: case NOV:
                days = 30;
                break;
            case FEB:
                days = 28; // 29 in a leap year
                break;
        }

        printf("%s: %d days\n", month_names[m], days);
    }

    return 0;
}
