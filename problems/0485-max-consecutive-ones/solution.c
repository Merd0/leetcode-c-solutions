int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    /*
     * Count current streak of 1 values.
     * Reset the streak when a 0 appears.
     */
    int current = 0;
    int best = 0;

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 1) {
            ++current;
            if (current > best) {
                best = current;
            }
        } else {
            current = 0;
        }
    }

    return best;
}
