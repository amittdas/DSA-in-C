#include <stdio.h>
#include <limits.h>

void maxProfit(int prices[], int n) {
    int bestBuy[100000];

    bestBuy[0] = INT_MAX;

    for (int i = 1; i < n; i++) {
        if (bestBuy[i - 1] < prices[i - 1])
            bestBuy[i] = bestBuy[i - 1];
        else
            bestBuy[i] = prices[i - 1];

        printf("%d,", bestBuy[i]);
    }
    printf("\n");

    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int currentProfit = prices[i] - bestBuy[i];

        if (currentProfit > maxProfit)
            maxProfit = currentProfit;
    }

    printf("%d\n", maxProfit);
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    maxProfit(prices, n);
    return 0;
}
