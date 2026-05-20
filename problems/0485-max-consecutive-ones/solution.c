int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int maxI = 0;
    int currentI = 0;

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] == 1) {
            ++currentI;

            if (currentI > maxI) {
                maxI = currentI;
            }
        } else {
            currentI = 0;
        }
    }

    return maxI;
}
