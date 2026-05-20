int pivotIndex(int *nums, int numsSize)
{
    /*
     * left_sum is sum before i.
     * right_sum = total - left_sum - nums[i].
     */
    int total = 0;
    int left_sum = 0;

    for (int i = 0; i < numsSize; ++i) {
        total += nums[i];
    }

    for (int i = 0; i < numsSize; ++i) {
        if (left_sum == total - left_sum - nums[i]) {
            return i;
        }

        left_sum += nums[i];
    }

    return -1;
}
