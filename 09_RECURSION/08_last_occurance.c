#include <stdio.h>

int lastOccurrence(int arr[], int n, int target, int i) {
    if (i == n) {
        return -1;
    }

    int idxFound = lastOccurrence(arr, n, target, i + 1);

    if (idxFound == -1 && arr[i] == target) {
        return i;
    }

    return idxFound;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", lastOccurrence(arr, n, 3, 0));

    return 0;
}