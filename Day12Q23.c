#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if (days < 0) {
        printf("Invalid input! Late days cannot be negative.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine. Returned on time!\n");
    } 
    else if (days > 30) {
        printf("Membership Cancelled (more than 30 days late).\n");
    } 
    else {
        // Tier 1: First 5 days (days 1 to 5) at ₹2/day
        if (days <= 5) {
            fine = days * 2;
        } 
        // Tier 2: Next 5 days (days 6 to 10) at ₹4/day
        else if (days <= 10) {
            fine = (5 * 2) + (days - 5) * 4;
        } 
        // Tier 3: Next 20 days (days 11 to 30) at ₹6/day
        else {
            fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        }

        printf("Total Fine: ₹%d\n", fine);
    }

    return 0;
}
