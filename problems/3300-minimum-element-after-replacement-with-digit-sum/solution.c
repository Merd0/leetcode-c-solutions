int minElement(int* nums, int numsSize) {
    int min = 1000000;

    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];
        int digitSum = 0;

        while (temp > 0) {
            digitSum += temp % 10;
            temp /= 10;
        }

        if (digitSum < min) {
            min = digitSum;
        }
    }

    return min;
}
