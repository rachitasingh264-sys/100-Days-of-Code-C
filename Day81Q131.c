#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

static const char *day_name(enum Day d) {
    switch (d) {
        case SUNDAY:    return "SUNDAY";
        case MONDAY:    return "MONDAY";
        case TUESDAY:   return "TUESDAY";
        case WEDNESDAY: return "WEDNESDAY";
        case THURSDAY:  return "THURSDAY";
        case FRIDAY:    return "FRIDAY";
        case SATURDAY:  return "SATURDAY";
        default:        return "UNKNOWN";
    }
}

int main(void) {
    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("%s = %d\n", day_name(d), d);
    }

    return 0;
}
