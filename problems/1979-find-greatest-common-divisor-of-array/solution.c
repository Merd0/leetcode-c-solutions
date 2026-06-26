int findGCD(int* nums, int numsSize) {
    int minValue = nums[0];
    int maxValue = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < minValue) {
            minValue = nums[i];
        }

        if (nums[i] > maxValue) {
            maxValue = nums[i];
        }
    }

    // The first common divisor found from the top is the greatest one.
    for (int divisor = minValue; divisor >= 1; divisor--) {
        if (maxValue % divisor == 0 && minValue % divisor == 0) {
            return divisor;
        }
    }

    return 1;
}
