#include <stdio.h>

int main() {
    float units, bill = 0.0f;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if (units < 0) {
        printf("Invalid input! Units consumed cannot be negative.\n");
        return 1;
    }

    if (units <= 100) {
        // Slab 1: First 100 units at ₹5/unit
        bill = units * 5.0f;
    } 
    else if (units <= 200) {
        // Slab 1 (100 * ₹5) + Slab 2 (remaining units at ₹7/unit)
        bill = (100 * 5.0f) + (units - 100) * 7.0f;
    } 
    else if (units <= 300) {
        // Slab 1 (100 * ₹5) + Slab 2 (100 * ₹7) + Slab 3 (remaining units at ₹10/unit)
        bill = (100 * 5.0f) + (100 * 7.0f) + (units - 200) * 10.0f;
    } 
    else {
        // Slab 1 + Slab 2 + Slab 3 + Slab 4 (units above 300 at ₹12/unit)
        bill = (100 * 5.0f) + (100 * 7.0f) + (100 * 10.0f) + (units - 300) * 12.0f;
    }

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
