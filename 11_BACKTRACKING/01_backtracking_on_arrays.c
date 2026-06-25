#include <stdio.h>

void printArr(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void changeArr(int arr[], int n, int i) {
    if(i == n) {
        printArr(arr, n);
        return;
    }

    arr[i] = i + 1;
    changeArr(arr, n, i + 1);
    arr[i] -= 2;   // Backtracking
}

int main() {
    int arr[5] = {0};
    int n = 5;

    changeArr(arr, n, 0);
    printArr(arr, n);

    return 0;
}