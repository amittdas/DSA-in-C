#include <stdio.h>

void trappingRainwater(int *height, int n) {

    int leftMax[20000];
    int rightMax[20000];

    leftMax[0] = height[0];
    rightMax[n - 1] = height[n - 1];

    // Calculate left max array
    for (int i = 1; i < n; i++) {
        leftMax[i] = (leftMax[i - 1] > height[i - 1])
                        ? leftMax[i - 1]
                        : height[i - 1];
    }

    // Calculate right max array
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = (rightMax[i + 1] > height[i + 1])
                        ? rightMax[i + 1]
                        : height[i + 1];
    }

    int waterTrapped = 0;

    for (int i = 0; i < n; i++) {
        int minHeight = (leftMax[i] < rightMax[i])
                            ? leftMax[i]
                            : rightMax[i];

        int currentWater = minHeight - height[i];

        if (currentWater > 0) {
            waterTrapped += currentWater;
        }
    }

    printf("%d\n", waterTrapped);
}

int main() {
    int height[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);

    trappingRainwater(height, n);
    return 0;
}
