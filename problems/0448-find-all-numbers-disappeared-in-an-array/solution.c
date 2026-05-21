#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{
    int *result = malloc((size_t)numsSize * sizeof(int));
    *returnSize = 0;

    /* 1. Tur: Dizide gorulen sayilari isaretle. */
    for (int i = 0; i < numsSize; ++i) {
        int val = abs(nums[i]);  /* negatif yapilmissa bile gercek degeri al */
        int index = val - 1;     /* sayi 1 ise index 0, sayi 8 ise index 7 */

        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    /* 2. Tur: Pozitif kalan indexler hic gorulmeyen sayilari gosterir. */
    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) {
            result[*returnSize] = i + 1;
            ++(*returnSize);
        }
    }

    return result;
}
