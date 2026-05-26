double findMaxAverage(int* nums, int numsSize, int k) {
    int sum = 0;

    // Sum of the first k elements.
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    int maxSum = sum;

    // Slide the window one step at a time.
    for (int i = k; i < numsSize; i++) {
        sum = sum - nums[i - k] + nums[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    return (double)maxSum / k;
}
