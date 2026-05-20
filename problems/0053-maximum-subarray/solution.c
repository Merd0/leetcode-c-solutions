int maxSubArray(int *nums, int numsSize)
{
    /*
     * Kadane's algorithm:
     * current = best subarray sum ending at this index.
     * best = best sum seen anywhere.
     */
    int current = nums[0];
    int best = nums[0];

    for (int i = 1; i < numsSize; ++i) {
        current = nums[i] > current + nums[i] ? nums[i] : current + nums[i];
        best = best > current ? best : current;
    }

    return best;
}
