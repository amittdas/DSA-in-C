#include <stdio.h>

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int copyarr[n];   // C99 variable length array
    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        copyarr[i] = arr[j];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = copyarr[i];
    }

    reverseArray(arr, n);
    return 0;
}
