#include <stdio.h>

int main()
{
    // bitwise AND (&)
    // 0 & 0 = 0
    // 0 & 1 = 0
    // 1 & 0 = 0
    // 1 & 1 = 1
    printf("%d\n", (3 & 5));

    // bitwise OR (|)
    // 0 | 0 = 0
    // 0 | 1 = 1
    // 1 | 0 = 1
    // 1 | 1 = 1
    printf("%d\n", (3 | 5));

    // bitwise XOR (^)
    // 0 ^ 0 = 0
    // 0 ^ 1 = 1
    // 1 ^ 0 = 1
    // 1 ^ 1 = 0
    printf("%d\n", (3 ^ 5));

    return 0;
}