int minOperations(int* nums, int numsSize, int k) {
    int xorNums = 0;

    // First get the current XOR result of the whole array.
    for (int i = 0; i < numsSize; i++) {
        xorNums ^= nums[i];
    }

    // 1 bits in diff are exactly the bit positions that must change.
    int diff = xorNums ^ k;
    int count = 0;

    while (diff != 0) {
        // Check the lowest bit, then move to the next bit by shifting right.
        if ((diff & 1) == 1) {
            count++;
        }

        diff >>= 1;
    }

    return count;
}
