#include <stdbool.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    
    bool* candiesKids = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;

    for(int i = 0 ; i < candiesSize; i++){
        int newCandy = candies[i] + extraCandies;
        bool hasGreater = false;

        for(int j = 0 ; j < candiesSize; j++){
            if(newCandy < candies[j]){
                hasGreater = true;
                break;
            }
        }

        candiesKids[i] = !hasGreater;
    }
    
    return candiesKids;
}
