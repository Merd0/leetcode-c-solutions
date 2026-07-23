int findNumbers(int* nums, int numsSize) {
    int evenDigits = 0;

    for (int i = 0; i < numsSize; i++) {
        int value = nums[i];
        int digitCount = 0;

        // Work on a copy so the input array remains unchanged.
        while (value != 0) {
            value /= 10;
            digitCount++;
        }

        if (digitCount % 2 == 0) {
            evenDigits++;
        }
    }

    return evenDigits;
}
