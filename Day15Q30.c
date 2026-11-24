#include <stdio.h>

int main() {
    long long num, temp, reversed = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    while (temp != 0) {
        int digit = (int)(temp % 10);
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    printf("Reversed number of %lld = %lld\n", num, reversed);

    return 0;
}
