#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *buildArray(int *nums, int numsSize, int *returnSize)
{
    int *yDizi = malloc((size_t)numsSize * sizeof(int));

    /* LeetCode'a dondurecegim dizinin boyutunu soyluyorum. */
    *returnSize = numsSize;

    /*
     * Islemleri nums uzerinden okuyorum, sonucu yDizi icine yaziyorum.
     * Boylece nums dizisi bozulmaz.
     */
    for (int i = 0; i < numsSize; ++i) {
        /* nums[i] gidilecek indexi, nums[nums[i]] o indexteki degeri verir. */
        yDizi[i] = nums[nums[i]];
    }

    return yDizi;
}
