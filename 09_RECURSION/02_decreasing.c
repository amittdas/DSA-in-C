#include <stdio.h>

void printNto1(int n) {
    if(n == 0) {
        return;
    }

    printf("%d, ", n);
    printNto1(n - 1);
}

int main() {
    printNto1(5);

    return 0;
}