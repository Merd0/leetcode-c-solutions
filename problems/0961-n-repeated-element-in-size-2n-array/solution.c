int repeatedNTimes(int* nums, int numsSize) {
    int kacTane[10001] = {0};

    for (int i = 0; i < numsSize; i++) {
        kacTane[nums[i]]++;

        if (kacTane[nums[i]] > 1) {
            return nums[i];
        }
    }

    return -1;
}
