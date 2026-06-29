int removeDuplicates(int* nums, int numsSize) {
    int write = 0;

    for (int i = 0; i < numsSize; i++) {
        if (write < 2 || nums[i] != nums[write - 2]) {
            nums[write] = nums[i];
            write++;
        }
    }

    return write;
}
