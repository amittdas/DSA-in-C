#include <stdio.h>

void merge(int arr[], int si, int mid, int ei)
{
    int temp[ei - si + 1];
    int i = si;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= ei)
    {
        temp[k++] = arr[j++];
    }

    for (i = si, k = 0; i <= ei; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printArr(arr, n);

    return 0;
}