int minSubArrayLen(int target, int* nums, int numsSize) {
    int left = 0;
    int sum = 0;
    int minLen = numsSize + 1;

    for (int right = 0; right < numsSize; right++) {
        sum += nums[right];

        while (sum >= target) {
            int len = right - left + 1;

            if (len < minLen) {
                minLen = len;
            }

            sum -= nums[left];
            left++;
        }
    }

    if (minLen == numsSize + 1) {
        return 0;
    }

    return minLen;
}
