#include <stdio.h>

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;
    int temp;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    reverseArray(arr, n);
    return 0;
}
