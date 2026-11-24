#include <stdio.h>

long long integer_sqrt_floor(long long val) {
    long long low = 0;
    long long high = val;
    long long ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid <= val / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int find_pivot_integer(long long n) {
    long long total = n * (n + 1) / 2;
    long long root = integer_sqrt_floor(total);

    if (root * root == total) {
        return (int)root;
    }

    return -1;
}

int main(void) {
    long long n;

    printf("Enter a positive integer n: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    printf("%d\n", find_pivot_integer(n));

    return 0;
}
