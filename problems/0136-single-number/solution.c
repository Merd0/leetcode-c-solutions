int singleNumber(int *nums, int numsSize)
{
    /*
     * XOR trick:
     * x ^ x = 0 and x ^ 0 = x.
     * All duplicated numbers cancel out.
     */
    int result = 0;

    for (int i = 0; i < numsSize; ++i) {
        result ^= nums[i];
    }

    return result;
}
