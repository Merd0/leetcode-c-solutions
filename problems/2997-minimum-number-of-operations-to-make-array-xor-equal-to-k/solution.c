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
        // Clears the lowest set bit: for example 1100 -> 1000.
        diff &= (diff - 1);
        count++;
    }

    return count;
}
