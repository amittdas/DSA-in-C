#include <stdio.h>

// Segmentation fault
// Missing base case

void func() {
    printf("stack overflow...\n");
    func();
}

int main() {
    // func();

    return 0;
}