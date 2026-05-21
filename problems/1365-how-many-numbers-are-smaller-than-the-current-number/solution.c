#include <stdlib.h>

int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{
    int tekrarSayi = 0;
    int anlikSayi;

    int *yDizi = calloc((size_t)numsSize, sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; ++i) {
        anlikSayi = nums[i];
        tekrarSayi = 0;

        for (int j = 0; j < numsSize; ++j) {
            if (anlikSayi > nums[j]) {
                ++tekrarSayi;
            }
        }

        yDizi[i] = tekrarSayi;
    }

    return yDizi;
}

/*
 * Alternative optimized idea:
 * Count how many times each value 0..100 appears, convert that count array
 * into prefix counts, then answer each nums[i] with count[nums[i] - 1].
 */
