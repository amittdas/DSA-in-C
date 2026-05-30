#include <stdio.h>

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }

    int halfPow = power(x, n / 2);
    int halfPowSquare = halfPow * halfPow;

    if (n % 2 != 0) {
        // odd
        return x * halfPowSquare;
    }

    return halfPowSquare;
}

int main() {
    printf("%d\n", power(2, 10));
    return 0;
}