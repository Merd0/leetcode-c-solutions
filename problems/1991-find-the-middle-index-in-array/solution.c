int findMiddleIndex(int* nums, int numsSize) {
    int total = 0;

    for (int i = 0; i < numsSize; i++) {
        total += nums[i];
    }

    int left = 0;

    for (int i = 0; i < numsSize; i++) {
        int right = total - left - nums[i];

        if (left == right) {
            return i;
        }

        left += nums[i];
    }

    return -1;
}
