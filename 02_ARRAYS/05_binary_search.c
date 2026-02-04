#include <stdio.h>

int binarySearch(int *arr, int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {   // ✅ FIXED
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        } 
        else if (arr[mid] < key) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);

    printf("%d\n", binarySearch(arr, n, 10));
    return 0;
}
