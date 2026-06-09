#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int si, int ei) {
    int i = si - 1;
    int pv = arr[ei];

    for (int j = si; j < ei; j++) {
        if (arr[j] <= pv) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    i++;
    swap(&arr[i], &arr[ei]);

    return i;
}

void quickSort(int arr[], int si, int ei) {
    if (si >= ei) {
        return;
    }

    int pivot = partition(arr, si, ei);

    quickSort(arr, si, pivot - 1);  // Left half
    quickSort(arr, pivot + 1, ei);  // Right half
}

int main() {
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    printArray(arr, n);

    return 0;
}