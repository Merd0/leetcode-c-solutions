int removeDuplicates(int *nums, int numsSize)
{
    /*
     * Array is sorted.
     * Only write a value when it differs from the last unique value.
     */
    if (numsSize == 0) {
        return 0;
    }

    int write = 1;

    for (int read = 1; read < numsSize; ++read) {
        if (nums[read] != nums[write - 1]) {
            nums[write] = nums[read];
            ++write;
        }
    }

    return write;
}
