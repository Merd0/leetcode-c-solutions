int removeElement(int *nums, int numsSize, int val)
{
    /*
     * Compact every value that is not val.
     * Values after the returned length do not matter.
     */
    int write = 0;

    for (int read = 0; read < numsSize; ++read) {
        if (nums[read] != val) {
            nums[write] = nums[read];
            ++write;
        }
    }

    return write;
}
