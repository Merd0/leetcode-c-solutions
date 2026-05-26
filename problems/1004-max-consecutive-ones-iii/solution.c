int longestOnes(int* nums, int numsSize, int k) {
    int left = 0;
    int zeroCount = 0;
    int max1 = 0;

    for (int right = 0; right < numsSize; right++) {
        if (nums[right] == 0) {
            zeroCount++;
        }

        while (zeroCount > k) {
            if (nums[left] == 0) {
                zeroCount--;
            }
            left++;
        }

        int len = right - left + 1;

        if (len > max1) {
            max1 = len;
        }
    }

    return max1;
}
