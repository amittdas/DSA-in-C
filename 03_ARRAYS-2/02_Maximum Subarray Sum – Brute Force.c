#include <stdio.h>
#include <limits.h>

void maxSubarraySum(int *arr, int n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currentSum = 0;

            for (int i = start; i <= end; i++) {
                currentSum += arr[i];
            }

            printf("%d, ", currentSum);

            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
        printf("\n");
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);
}

// TIME COMPLEXITY = O(n^3)
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);
    return 0;
}
