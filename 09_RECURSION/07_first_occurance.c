#include <stdio.h>

int firstOccurrence(int arr[], int n, int i, int target) {
    if (i == n) {
        return -1;
    }
    if (arr[i] == target) {
        return i;
    }
    return firstOccurrence(arr, n, i + 1, target);
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", firstOccurrence(arr, n, 0, 3));

    return 0;
}