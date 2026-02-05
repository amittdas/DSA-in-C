#include <stdio.h>
#include <limits.h>

void maxSubarraySum(int *arr, int n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int currentSum = 0;

        for (int end = start; end < n; end++) {
            currentSum += arr[end];

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);
}

// TIME COMPLEXITY = O(n^2)
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);
    return 0;
}
