#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user for input
    printf("Enter two integers: ");
    
    // Read the two numbers from the user
    scanf("%d %d", &num1, &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;
}
