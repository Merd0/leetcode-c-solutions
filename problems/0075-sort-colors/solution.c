void sortColors(int* nums, int numsSize) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            zeros++;
        } else if (nums[i] == 1) {
            ones++;
        } else {
            twos++;
        }
    }

    int write = 0;

    while (zeros > 0) {
        nums[write++] = 0;
        zeros--;
    }

    while (ones > 0) {
        nums[write++] = 1;
        ones--;
    }

    while (twos > 0) {
        nums[write++] = 2;
        twos--;
    }
}
