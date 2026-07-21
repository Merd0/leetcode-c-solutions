int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {
    if (k <= 1) {
        return 0;
    }

    long long product = 1;
    int left = 0;
    int answer = 0;

    for (int right = 0; right < numsSize; right++) {
        product *= nums[right];

        // Shrink until the active window satisfies the product limit again.
        while (product >= k) {
            product /= nums[left];
            left++;
        }

        // Every suffix of the valid window ending at right is also valid.
        answer += right - left + 1;
    }

    return answer;
}
