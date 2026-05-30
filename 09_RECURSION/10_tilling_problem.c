#include <stdio.h>

int tilingProb(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return tilingProb(n - 1) + tilingProb(n - 2);
}

int main() {
    int n = 4;
    printf("%d\n", tilingProb(n));
    return 0;
}