#include <stdio.h>

int friendsPairing(int n) {
    if (n == 1 || n == 2) {
        return n;
    }

    return friendsPairing(n - 1) + (n - 1) * friendsPairing(n - 2);
}

int main() {
    printf("%d\n", friendsPairing(4));
    printf("%d\n", friendsPairing(3));

    return 0;
}