#include <stdio.h>

int main() {
    int arr[] = {5, 8, 9, 4, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d", max);
    return 0;
}
