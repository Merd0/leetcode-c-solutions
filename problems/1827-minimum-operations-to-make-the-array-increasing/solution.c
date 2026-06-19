int minOperations(int* nums, int numsSize) {
    int count = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) {
            int needed = nums[i - 1] + 1;

            count += needed - nums[i];
            nums[i] = needed;
        }
    }

    return count;
}
