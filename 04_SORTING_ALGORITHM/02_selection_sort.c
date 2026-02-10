#include <stdio.h>

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        int minidx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minidx] > arr[j]){
                minidx = j;
            }
        }
        // manual swap
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
    printArray(arr, n);
}

int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);
    return 0;
}
