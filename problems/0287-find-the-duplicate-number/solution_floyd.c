int findDuplicate(int* nums, int numsSize) {
    (void)numsSize;

    int slow = nums[0];
    int fast = nums[0];

    /*
     * nums[i] is treated as the next index.
     * Slow moves one step, fast moves two steps until they meet inside a cycle.
     */
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    /*
     * Move one pointer back to the start.
     * Walking both one step at a time gives the cycle entry: the duplicate.
     */
    slow = nums[0];

    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}
