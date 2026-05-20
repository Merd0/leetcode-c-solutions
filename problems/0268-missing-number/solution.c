int missingNumber(int *nums, int numsSize)
{
    /*
     * XOR all indexes and all values.
     * Matching numbers cancel, missing number remains.
     */
    int result = numsSize;

    for (int i = 0; i < numsSize; ++i) {
        result ^= i;
        result ^= nums[i];
    }

    return result;
}
