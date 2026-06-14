#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    
    int* finalPrice = malloc(pricesSize * sizeof(int));
    *returnSize = pricesSize;

    for (int i = 0; i < pricesSize; i++) {
        finalPrice[i] = prices[i];

        for (int j = i + 1; j < pricesSize; j++) {
            if (prices[j] <= prices[i]) {
                finalPrice[i] = prices[i] - prices[j];
                break;
            }
        }
    }

    return finalPrice;
}
