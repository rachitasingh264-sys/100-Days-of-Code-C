#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

static const char *traffic_action(enum TrafficLight light) {
    switch (light) {
        case RED:
            return "Stop";
        case YELLOW:
            return "Wait";
        case GREEN:
            return "Go";
        default:
            return "Invalid";
    }
}

int main(void) {
    int choice;

    printf("Enter traffic light value (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid\n");
        return 1;
    }

    enum TrafficLight light = (enum TrafficLight)choice;
    printf("%s\n", traffic_action(light));

    return 0;
}
